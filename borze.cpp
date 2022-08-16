#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x)for(auto it:x){cout<<it<<" ";}cout<<endl

vector<int> digits(int n){
    // int temp=0;
    vector<int> ans;
    while(n>0){
        int temp=n%10;
        ans.pb(temp);
        n=n/10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin>>s;
    string ans="";

    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            ans+=to_string(0);
        }
        else if(i!=s.length()-1){
            if(s[i]=='-' && s[i+1]=='.'){
                ans+=to_string(1);
            }
            else if(s[i]=='-' && s[i+1]=='-'){
                ans+=to_string(2);
            }
            i+=1;
        }
    }
    cout<<ans<<endl;


    
}