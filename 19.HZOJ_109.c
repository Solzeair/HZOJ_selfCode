/*************************************************************************
	> File Name: 19.HZOJ_109.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 10:10:27 PM CST
 ************************************************************************/

#include <stdio.h> 

int main() {
    char s[10];
    scanf("%s", s);
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
