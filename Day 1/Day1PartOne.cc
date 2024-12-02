#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> ls(n);
    vector<int> ls2(n);

    for (int i=0; i<n; i++) {
        cin >> ls[i] >> ls2[i];
    }

    sort(ls.begin(), ls.end());
    sort(ls2.begin(), ls2.end());

    int out = 0;

    for (int i=0; i<ls.size(); i++) {
        out += abs(ls[i] - ls2[i]);
    }
    cout << out;
    return 0;
}