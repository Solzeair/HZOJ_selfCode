/*************************************************************************
	> File Name: 2.HZOJ_595.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Mar 2025 09:00:13 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int flag = 0, n;
    cin >> n;
    vector<string> ops(n), s;
    string target;
    for (int i = 0; i < n; i++) cin >> ops[i];
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (ops[i] == target) {
            s.push_back(ops[i]);
            flag = 1;
            break;
        }
        if (ops[i] == "return") s.pop_back();
        else s.push_back(ops[i]);
    }
    if (flag) {
        for (int i = 0; i < s.size(); i++) {
            i && cout << "->";
            cout << s[i];
        }
        cout << endl;
    } else cout << "NOT REFERENCED" << endl;
    return 0;
}
