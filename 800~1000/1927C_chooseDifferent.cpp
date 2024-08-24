#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--) {
        int n, m, k;
        cin>>n>>m>>k;
        set<int> a,b,tmp;
        int c, d;
        for(int i = 0; i < n; i++){
            cin>>c;
            if(c<=k){
                a.insert(c);
                tmp.insert(c);
            }
        }
        for (int i = 0; i < m; i++) {
            cin>>d;
            if(d<=k){
                b.insert(d);
                tmp.insert(d);
            }
        }
        cout<<((tmp.size()==k&&a.size()>=k/2&&b.size()>=k/2)?"YES":"NO")<<endl;
    }
}