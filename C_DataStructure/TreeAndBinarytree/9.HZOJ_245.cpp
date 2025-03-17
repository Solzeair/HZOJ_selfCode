/*************************************************************************
	> File Name: 9.HZOJ_245.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 17 Mar 2025 03:14:48 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int ans = 0; 
    int pos = arr[n / 2];
    for (int i = 0; i < n; i++) {
        ans += abs(arr[i] - pos);
    }
    cout << ans;
    return 0;
}
