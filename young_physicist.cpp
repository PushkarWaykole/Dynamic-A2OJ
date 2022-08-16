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

    vi x,y,z;

    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
    }

    if(accumulate(x.begin(),x.end(),0)==0 && accumulate(y.begin(),y.end(),0)==0 && accumulate(z.begin(),z.end(),0)==0){
        print("YES");
    }
    else{
        print("NO");
    }
    
}