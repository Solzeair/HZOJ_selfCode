/*************************************************************************
	> File Name: 17.HZOJ_118.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 08:56:15 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, n;
    scanf("%d", &y);
    n = y % 12; 
    switch (n) {
        case 0: printf("monkey"); break;
        case 1: printf("rooster"); break;
        case 2: printf("dog"); break;
        case 3: printf("pig"); break;
        case 4: printf("rat"); break;
        case 5: printf("ox"); break;
        case 6: printf("tiger"); break;
        case 7: printf("rabbit"); break;
        case 8: printf("dragon"); break;
        case 9: printf("snake"); break;
        case 10: printf("horse"); break;
        case 11: printf("sheep"); break;
    }
    return 0;
}
