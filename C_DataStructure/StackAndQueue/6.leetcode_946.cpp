/*************************************************************************
	> File Name: 6.leetcode_946.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 04 Mar 2025 04:21:47 PM CST
 ************************************************************************/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int x = 0;
        stack<int> s;
        for (int i = 0; i < pushed.size(); i++) {
            if (s.empty() || s.top() != popped[i]) {
                while (x < pushed.size() && pushed[x] != popped[i]) {
                    s.push(pushed[x]);
                    x += 1;
                }
                if (x == pushed.size()) return false;
                s.push(pushed[x]);
                x += 1;
            }
            s.pop();
        }
        return true;
    }
};
