#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;

    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }

    cout<<ans<<endl;


    
}