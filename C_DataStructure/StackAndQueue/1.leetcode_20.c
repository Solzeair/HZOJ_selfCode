/*************************************************************************
	> File Name: 1.leetcode_20.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Mar 2025 07:45:48 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    char *data;
    int size, top;
} Stack;

Stack *initStack(int n) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->data = (char *)malloc(sizeof(char) * n);
    s->size = n;
    s->top = -1;
    return s;
}

int empty(Stack *s) {
    return s->top == -1;
}

char top(Stack *s) {
    if (empty(s)) return 0;
    return s->data[s->top];
}

int push(Stack *s, char val) {
    if (s->top + 1 == s->size) return 0;
    s->top += 1;
    s->data[s->top] = val;
    return 1;
}

int pop(Stack *s) {
    if (empty(s)) return 0;
    s->top -= 1;
    return 1;
}

void clearStack(Stack *s) {
    if (s == NULL) return ;
    free(s->data);
    free(s);
    return ;
}

void func() {
    char str[10005];
    scanf("s = \"%[^\"]\"", str);
    Stack *s = initStack(6000);
    int flag = 1;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') push(s, str[i]);
        else {
            switch (str[i]) {
                case ')': 
                    if (!empty(s) && top(s) == '(') pop(s);
                    else flag = 0;
                    break;
                case ']':
                    if (!empty(s) && top(s) == '[') pop(s);
                    else flag = 0;
                    break;
                case '}':
                    if (!empty(s) && top(s) == '{') pop(s);
                    else flag = 0;
                    break;
            }
            if (flag == 0) break;
        }
    }
    if (empty(s) && flag == 1) printf("true");
    else printf("false");
    clearStack(s);
    return ;
}

int main() {
    func();
    return 0;
}

/* 数组模拟栈
char pairs(char a) {
    if (a == '}') return '{';
    if (a == ']') return '[';
    if (a == ')') return '(';
    return 0;
}

bool isValid(char* s) {
    int n = strlen(s);
    if (n % 2 == 1) {
        return false;
    }
    int stk[n + 1], top = 0;
    for (int i = 0; i < n; i++) {
        char ch = pairs(s[i]);
        if (ch) {
            if (top == 0 || stk[top - 1] != ch) {
                return false;
            }
            top--;
        } else {
            stk[top++] = s[i];
        }
    }
    return top == 0;
}
*/
