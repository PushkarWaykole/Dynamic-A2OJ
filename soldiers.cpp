#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>


int findMin(vi &arr){
    int mn=INT_MAX;
    int index=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<=mn){
            mn=arr[i];
            index=i;
        }
    }

    return index;
}
int findMax(vi &arr){
    int mn=INT_MIN;
    int index=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>=mn){
            mn=arr[i];
            index=i;
        }
    }

    return index;
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
    int max_value=0,min_value=110;//to store minimum and maximum value
    int maxi=0,mini=0;//to store maximum and minimum value index
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a>max_value){
            maxi=i;
            max_value=a;
        }
        if(a<=min_value){
            mini=i;
            min_value=a;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1;
    }else{
        cout<<(maxi-1)+(n-mini);
    }
    return 0;


    
}