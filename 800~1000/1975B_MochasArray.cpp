# include <iostream>
# include <vector>
# include <algorithm>
# define endl "\n"
typedef long long ll;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) 
            cin>>v[i];
        sort(v.begin(), v.end());
        int i = v[0]; vector <int> b;
        for (int j = 1; j < n; j++){
            if (v[j]%i!=0) b.push_back(v[j]);
        }
        if (b.empty()) cout<<"YES"<<endl;
        else{
            int j = b[0];
            bool check = true;
            for (auto x:b) {
                if (x%j!=0) check = false;
            }
            if (check) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}