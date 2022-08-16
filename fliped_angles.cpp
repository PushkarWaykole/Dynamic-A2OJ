#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x)for(auto it:x){cout<<it<<" ";}cout<<endl

#define isfind(m,num) (m.find(num)==m.end())

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

    int t;cin>>t;
    while(t--){
        int n,m;
        bool b=true;
        cin>>n>>m;
        if(n==1 || m==1){
            int A[n][m];
            int B[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>A[i][j];
                }
            }
            //for B
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>B[i][j];
                }
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(A[i][j]!=B[i][j]){
                        b=false;
                        break;
                    }
                }
            }
        }
        else{
            int num=0;
            map<int,int> A1,A2,B1,B2;

            // FOR A
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>num;
                    if((i+j)%2!=0){
                        if(isfind(A1,num)){
                            A1.insert({num,1});
                        }
                        else{
                            A1.insert({num,A1[num]+1});
                        }
                    }
                    else{
                        if(isfind(A2,num)){
                            if(A2,num){
                            A2.insert({num,1});
                            }
                            else{
                            A2.insert({num,A2[num]+1});
                        }
                        }
                    }
                }
            }

            //for B
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>num;
                    if((i+j)%2!=0){
                        if(isfind(B1,num)){
                            B1.insert({num,1});
                        }
                        else{
                            B1.insert({num,B1[num]+1});
                        }
                    }
                    else{
                        if(isfind(B2,num)){
                            if(B2,num){
                            B2.insert({num,1});
                            }
                            else{
                            B2.insert({num,B2[num]+1});
                        }
                        }
                    }
                }
            }
        
            for(auto it:A1){
                if(it.second!=B1[it.first]){
                    b=false;
                    break;
                }
            }
            for(auto it:A2){
                if(it.second!=B2[it.first]){
                    b=false;
                    break;
                }
            }
        }


        if(b){
            print("YES");
        }
        else{
            print("NO");
        }
    }


    
}