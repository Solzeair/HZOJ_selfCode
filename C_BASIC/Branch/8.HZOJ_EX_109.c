/*************************************************************************
	> File Name: 19.HZOJ_109.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 10:10:27 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    int flag = 0;//数位奇偶标识
    scanf("%d", &n);
    for (int i = 0; i < 4 && flag == 0; i++, n /= 10) {//循环后减去最后一位
        int tmp = n % 10;//每次循环取最后一位
        switch (tmp) {
            case 0:
            case 2: 
            case 4:
            case 6:
            case 8: flag = 1; break;//判断偶数
            default: break;
        }
        //if (flag == 1) break;判断是否结束循环，可直接写在循环条件判断里
    }
    if (flag == 1) printf("YES");
    else printf("NO");
    return 0;
}

/*数组写法
#include <stdio.h> 

int main() {
    char s[10];
    scanf("%s", s);
    //假设传入1235，则s[0]中存储的是49的ASCII码，为字符'1'
    //建议把条件写为(s[0] - 48) % 2 == 0
    if (s[0] % 2 == 0) {
        printf("YES");
        return 0;
    } else if (s[1] % 2 == 0) {
            printf("YES");
            return 0;
    } else if (s[2] % 2 == 0) {
            printf("YES");
            return 0;
    } else if (s[3] % 2 == 0) {
            printf("YES");
            return 0;
    } else printf("NO");
    return 0;
}
*/

/*扩展应用sccanf
#include <stdio.h>
 
int main() {
    char s[10]; 
    int a, b, c, d;
    scanf("%s", s);
    sscanf(s, "%1d%1d%1d%1d", &a, &b, &c, &d);
    printf("%s", (!(a % 2) || !(b % 2) || !(c % 2) || !(d % 2)) ? "YES" : "NO");
    return 0;
}
*/

/*非常规写法，编译器可能报错，不建议使用
#include<stdio.h>

int main() {
    char s[10];
    scanf("%s", s);
    !((s[0] - 46) % 2) && ({goto PRINT; 1;}); 
    !((s[1] - 46) % 2) && ({goto PRINT; 1;});
    !((s[2] - 46) % 2) && ({goto PRINT; 1;});
    !((s[3] - 46) % 2) && ({goto PRINT; 1;});
    printf("NO"); 
    return 0;
PRINT:
    printf("YES");
    return 0;
}
*/
