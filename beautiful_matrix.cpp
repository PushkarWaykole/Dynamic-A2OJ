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

  
    int x=0,y=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                x=i;
                y=j;
            }
        }
    }

    ll ans=abs(3-x)+abs(3-y);
    print(ans);

    
}