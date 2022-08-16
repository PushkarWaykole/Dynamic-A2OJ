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

    int n;
    cin>>n;
    int l0=0,l1=0,r0=0,r1=0;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(l==0){
            l0++;
        }
        else{
            l1++;
        }
        if(r==0){
            r0++;
        }
        else{
            r1++;
        }
    }

    int ans=min(l0,l1)+min(r0,r1);

    print(ans);


    
}