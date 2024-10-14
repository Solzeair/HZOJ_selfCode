/*************************************************************************
	> File Name: 30.HZOJ_151.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Sat 12 Oct 2024 11:25:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char M1, M2, L1, L2, t1, t2;

    //字符型变量和整型变量不同，空格符也是字符，会被字符型变量读入，而整型变量不会读入空格
    scanf("%c %c", &M1, &M2);
    
    //吞掉换行符
    getchar();
    scanf("%c %c", &L1, &L2);
    
    //flat==1时小明获胜,flat==0时李华获胜
    int flat;
    
    //平局讨论
    if (M1 == L1) {
        if (M2 == L2) {
            printf("TIE");
            return 0;
        } else {
            flat = (M2 - L2 == -10 || M2 - L2 == -7 || M2 - L2 == 17) ? 1 : 0;
        }
    
    //非平局讨论
    } else {
    
        //判断左手划拳谁赢
        flat = (M1 - L1 == -10 || M1 - L1 == -7 || M1 - L1 == 17) ? 1 : 0;
        
        //若flat==0，则进行变量对换，保证L为左手赢的人
        if (flat == 0) {
            t1 = L1; t2 = L2;
            L1 = M1; L2 = M2;
            M1 = t1; M2 = t2;
        }
        
        //左手赢的情况下的唯一的输法
        if (L2 - M1 == -10 || L2 - M1 == -7 || L2 - M1 == 17) {
            if (L2 - M2 == -10 || L2 - M2 == -7 || L2 - M2 == 17 || L2 == M2) flat = !flat;
        }
    }
        printf("%s", flat ? "MING" : "LIHUA");
        return 0;
}

/*
#include<stdio.h>

int main() {
	char M1, M2, L1, L2;
    //字符型变量和整型变量不同，空格符也是字符，会被字符型变量读入，而整型变量不会读入空格
	scanf("%c %c", &M1, &M2);
    //吞掉换行符
	getchar();
	scanf("%c %c", &L1, &L2);
	//flat==1时小明获胜,flat==0时李华获胜
    int flat;
    //平局讨论
	if (M1 == L1) {
		if (M2 == L2) { 
			printf("TIE");
			return 0;
		} else {
			flat = (M2 - L2 == -10 || M2 - L2 == -7 || M2 - L2 == 17) ? 1 : 0;
		}
    //非平局讨论
	} else {
        //判断左手划拳谁赢
		flat = (M1 - L1 == -10 || M1 - L1 == -7 || M1 - L1 == 17) ? 1 : 0;
        //小明赢
		if (flat) {
            //左手小明赢情况下唯一的输法:M1<L2,M2<=L2
            if (L2 - M1 == -10 || L2 - M1 == -7 || L2 - M1 == 17) {
                if (L2 - M2 == -10 || L2 - M2 == -7 || L2 - M2 == 17 || L2 == M2) flat = !flat;
            }
        //李华赢
        } else {
            //左手李华赢情况下唯一的输法:M2>L1,M2>=L2
            if (L1 - M2 == 10 || L1 - M2 == 7 || L1 - M2 == -17) {
                if (L2 - M2 == 10 || L2 - M2 == 7 || L2 - M2 == -17 || L2 == M2) flat = !flat;
            }
        }
	}
	printf("%s", flat ? "MING" : "LIHUA");
	return 0;
}
*/
