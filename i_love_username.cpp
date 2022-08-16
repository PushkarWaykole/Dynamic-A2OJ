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
    vi arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.pb(temp);
    }
    int ans=0;
    
    if(arr.size()==0 || arr.size()==1){
        ans=0;
    }
    else{
        int min=arr[0],max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max || arr[i]<min){
                ans++;
                if(arr[i]>max){
                    max=arr[i];                  
                }
                else if (arr[i]<min){
                    min=arr[i];
                }
            }
        }
    }

    print(ans);


    
}