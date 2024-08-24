#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n), a, b;
        for (int i = 0; i<n; i++) {
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int i = 1;  int j = n-2;
        a.push_back(v[0]); b.push_back(v[n-1]);
        while (1){
            if(i<n&&v[0]==v[i]&&v[i-1]==v[i]){
                a.push_back(v[i]);
            }else{
                break;
            }
            i++;
        }
        while(1){
            if(j>-1&&v[n-1]==v[j]&&v[j]==v[j+1]){
                b.push_back(v[j]);
            }else{
                break;
            }
            j--;
        }
        int s1 = a.size(), s2 = b.size();
        if(a.size()==n){
            cout<<0<<endl;
        }
        else if(a[0]==b[0]){
            cout<<n-s2-s1<<endl;
        }
        else if (s1>s2){
            cout<<n-s1<<endl;
        }
        else if (s1==s2){
            cout<<n-s1<<endl;
        }
        else{
            cout<<n-s2<<endl;
        }
    }

}