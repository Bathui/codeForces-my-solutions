# include <iostream>
# include <algorithm>
# define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, f, a, b;
        cin>>n>>f>>a>>b;
        ll t0, t1 = 0;
        while (n--) {
            cin>>t0;
            f-=min(b, (t0-t1)*a);
            t1 = t0;
        }
        if (f>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}