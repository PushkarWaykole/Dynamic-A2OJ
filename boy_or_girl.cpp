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
    map<char,int> mpp;

    for(auto it:s){
        mpp[it]++;
    }

    if(mpp.size()%2==0){
        print("CHAT WITH HER!");
    }
    else{
        print("IGNORE HIM!");
    }




    
}