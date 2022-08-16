#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>


bool unique(ll num){
    vector<ll> digits;
    ll n=0;
    while(num>0){
        n=num%10;
        digits.push_back(n);
        num=num/10;
    }

    set<ll> s(digits.begin(), digits.end());
    // cout<<s.size()<< digits.size()<<endl;
    return s.size()==digits.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll year = 0;
    cin>>year;
    while(true){
        year+=1;
        if(unique(year)){
            cout<<year<<endl;
            break;
        }
    }
   



    
}