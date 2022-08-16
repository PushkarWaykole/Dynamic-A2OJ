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

bool isPrime(int n){
    if(n==2) return true;
    if(n%2==0) return false;

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a,b;
    cin>>a>>b;

    bool ans=false;
    if(!isPrime(a) || !isPrime(b)) {
        ans=false;
    }
    else{
        int second=a+1;
        // print(second);

        while(!isPrime(second)){
            second++;
            // print(second);
        }
        if(second==b){
            ans=true;
        }
        else{
            ans=false;
        }

    }

    if(ans){
        print("YES");
    }
    else{
        print("NO");
    }


    
}