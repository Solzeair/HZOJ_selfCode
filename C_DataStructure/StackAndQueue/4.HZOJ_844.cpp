/*************************************************************************
	> File Name: 4.HZOJ_844.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Mar 2025 10:05:23 PM CST
 ************************************************************************/

class Solution {
public:
    void pushStack(string &str, stack<char> &s) {
        for (int i = 0; str[i]; i++) {
            if (str[i] == '#') {
                if (!s.empty()) s.pop();
            }
            else s.push(str[i]);       
        } 
        return ;
    }
    bool backspaceCompare(string s, string t) {
        stack<char> str1, str2;
        pushStack(s, str1);
        pushStack(t, str2);
        if (str1.size() != str2.size()) return false;
        while (!str1.empty()) {
            if (str1.top() != str2.top()) return false;
            str1.pop(), str2.pop();
        }
        return true;
    }
};
