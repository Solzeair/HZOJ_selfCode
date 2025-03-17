/*************************************************************************
	> File Name: 8.HZOJ_287.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 17 Mar 2025 03:00:48 PM CST
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

typedef pair<int, int> PII;

int main() {
    int n;
    cin >> n;
    set<PII> s;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        s.insert(PII(a, i));
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int a = s.begin()->first;
        s.erase(s.begin());
        int b = s.begin()->first;
        s.erase(s.begin());
        ans += a + b;
        s.insert(PII(a + b, n + i));
    }
    cout << ans;
    return 0;
}
