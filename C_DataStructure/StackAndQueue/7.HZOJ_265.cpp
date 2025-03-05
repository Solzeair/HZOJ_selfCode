/*************************************************************************
	> File Name: 7.HZOJ_265.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 04 Mar 2025 06:20:15 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;
#define MAX 10000

char str[MAX + 5];
int match[MAX + 5] = {0};
stack<int> s;

int main() {
    cin >> (str + 1);
    for (int i = 1; str[i]; i++) {
        switch (str[i]) {
            case '(': 
            case '[': 
            case '{': s.push(i); break;
            case ')': {
                if (!s.empty() && str[s.top()] == '(') {
                    match[s.top()] = i;
                    match[i] = s.top();
                    s.pop();
                } else s.push(i);
            } break;
            case ']': {
                if (!s.empty() && str[s.top()] == '[') {
                    match[s.top()] = i;
                    match[i] = s.top();
                    s.pop();
                } else s.push(i);
            } break;
            case '}': {
                if (!s.empty() && str[s.top()] == '{') {
                    match[s.top()] = i;
                    match[i] = s.top();
                    s.pop();
                } else s.push(i);
            } break;
        }
    }
    int temp_ans = 0, ans = 0, i = 1;
    while (str[i]) {
        if (match[i] != 0) {
            temp_ans += match[i] - i + 1;
            i = match[i] + 1;
        } else {
            temp_ans = 0;
            i += 1;
        }
        if (ans < temp_ans) ans = temp_ans;
    }
    cout << ans;
    return 0;
}
