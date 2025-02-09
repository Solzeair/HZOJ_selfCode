/*************************************************************************
	> File Name: 9.HZOJ_828.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 03:22:08 PM CST
 ************************************************************************/

#include <stdio.h>

void rotate_array(int *nums, int n, int p) {
    for (int i = 0; i < p; i++) {
        int temp = nums[0];
        for (int j = 1; j < n; j++) {
            nums[j - 1] = nums[j];
            if (j == n - 1) nums[j] = temp;
        }
    }
    return ;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    rotate_array(arr, n, k);
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
