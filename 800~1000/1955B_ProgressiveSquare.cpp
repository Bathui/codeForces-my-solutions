# include <iostream>
# include <vector>
# include <algorithm>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n, c, d;
        cin>>n>>c>>d;
        int size = n*n;
        vector <ll>v1(size), v2;
        for (int i = 0; i < size;i++) {
            cin>>v1[i];
        }
        sort(v1.begin(), v1.end());
        ll r = v1[0]; ll con = v1[0];
        for (int i = 0; i < n;i++) {
            for (int j = 0; j < n; j++) {
                v2.push_back(r);
                r+=d;
            }
            con+=c;
            r = con;
        }
        sort(v2.begin(), v2.end());
        cout<<(v1==v2?"YES":"NO")<<endl;
    }
}