/*************************************************************************
	> File Name: 2.HZOJ_87.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Thu 26 Sep 2024 11:50:04 PM CST
 ************************************************************************/

#include<stdio.h>
	
int main() {
	//浮点型尽量用double，减少溢出的可能性，本题测试数据不会溢出
    float l, w;//l，w是length和width的缩写，个人习惯便于辨认
    scanf("%f%f", &l, &w);//scanf函数默认不读入空格，%f之间不加空格不影响
    printf("%.2f\n%.2f", 2 * (l + w), l * w);//%.2f为保留小数点后2位
    return 0;
}
