#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define ll long long
#define int long long
void solve() {
    ofstream we("welcome.txt");
    we<<"Welcome Everybody";
    we.seekp(13);
    we<<"one ";
    we.close();
    ifstream we2("welcome.txt");
    string s;
    getline(we2,s);
    cout<<s<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TC=1;
    //cin>>TC;
    while (TC--)solve();
}