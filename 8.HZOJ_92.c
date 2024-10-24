/*************************************************************************
	> File Name: 8.HZOJ_92.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 08:40:45 PM CST
 ************************************************************************/

#include<stdio.h>

#define PAI 3.14 //宏定义

int main() {
	//const float PI=3.14; 不用宏定义
    double r;
    scanf("%lf", &r);
    printf("%.2lf\n%.2lf", 2.0 * PAI * r, PAI * r * r);
    //当PAI*r*r写成r*r*PAI时会出现精度问题，此问题暂不做解释
    return 0;
}

//该题具有精度问题，计算顺序不同导致结果不同
//错误示例
/*#include <stdio.h>
#define PI 3.14
int main() {
    double r;
    scanf("%lf", &r);
    double tmp;
    tmp = r * r * PI;
    printf("%lf\n%.2lf\n",tmp, tmp);
    tmp = PI * r * r;
    printf("%lf\n%.2lf\n",tmp, tmp);
    return 0;
}
*/
//提高精度写法
/*#include<stdio.h>
#define PI 3.14
int main(){
    long double r;
    scanf("%Lf", &r);
    long double tmp;
    tmp = r * r * PI;
    printf("%Lf\n%.2Lf\n",tmp, tmp);
    tmp = PI * r * r;
    printf("%Lf\n%.2Lf\n",tmp, tmp);
    return 0;
}
*/
