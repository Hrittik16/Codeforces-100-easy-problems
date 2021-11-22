#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int x, y;
    cin >> x >> y;
    
    vector<int> prefix(n+1);
    
    prefix[0] = 0;
    for(int i = 1; i <= n; i++) prefix[i] = a[i] + prefix[i-1];
    
    cout << prefix[y+1] - prefix[x] << "\n";

    return 0;
}
