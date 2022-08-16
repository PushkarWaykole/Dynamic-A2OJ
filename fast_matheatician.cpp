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

    string s1,s2;
    cin>>s1>>s2;

    string ans="";

    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            ans+="1";
        }
        else{
            ans+="0";
        }
    }

    cout<<ans<<endl;


    
}