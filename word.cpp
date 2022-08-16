#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>


ll lower(string s){
    ll count=0;
    for(auto c:s){
        if(c>='a' && c<='z'){
            count++;
        }
    }
    return count;
}

ll upper(string s){
    ll count=0;
    for(auto c:s){
        if(c>='A' && c<='Z'){
            count++;
        }
    }
    return count;
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

    if(lower(s)<upper(s)){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }
   
   



    
}























































