#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> ls(n);
    vector<int> ls2(n);
    unordered_map<int, int> occurences;

    for (int i=0; i<n; i++) {
        cin >> ls[i] >> ls2[i];
        occurences[ls2[i]] ++;
    }

    int out = 0;

    for (int i=0; i<ls.size(); i++) {
        out += (ls[i] * occurences[ls[i]]);
    }
    cout << out;
    return 0;
}