#include <bits/stdc++.h>
using namespace std;

bool customCompare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;
    vector<string> s;
    while (n--) {
        string num;
        cin >> num;
        s.push_back(num);
    }
    sort(s.begin(), s.end(), customCompare);
    string res;
    for (int i = 0; i < s.size(); i++) {
        res += s[i];
    }
    cout << res << endl;
    return 0;
}
