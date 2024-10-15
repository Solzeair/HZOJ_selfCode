/*************************************************************************
	> File Name: 37.HZOJ_465.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 15 Oct 2024 10:24:18 PM CST
 ************************************************************************/

#include<stdio.h>

int digit(long long n, int k) {
    long long tmp = 1;//易错点，int类型溢出
    //除掉前面的数位
    for (int i = 0; i < k; i++) {
        tmp *= 10;    
    }
    n %= tmp;
    //除掉后面的数位
    n = n / (tmp / 10);
    return n;
}

/*优解
int digit(long long n, long long k) {
    if (k == 1) return n % 10;
    return digit(n / 10, k - 1);
}
*/

int main() {
    long long n;
    int k;
    scanf("%lld%d", &n, &k);
    printf("%d", digit(n, k));
    return 0;
}
