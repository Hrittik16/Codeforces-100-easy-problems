#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i = 0; i < a.length(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if(a < b) ans = -1;
    else if(b < a) ans = 1;
    cout << ans << "\n";
}