# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v={1,2,3};

    while(t--){
        int n;
        cin>>n;
        if(n==3){
            for(auto a:v){
                cout<<a<<" ";
            }
            cout<<endl;
            continue;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if(!(i&1)) cout<<cnt+1<<" ";
            else{ 
                cout<<n-cnt<<" ";
                cnt++;
            }
        }
        cout<<endl;
    }
}
