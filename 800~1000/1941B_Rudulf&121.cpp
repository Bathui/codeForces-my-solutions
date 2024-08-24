# include <iostream>
# include <vector>
# include <algorithm>
typedef long long ll;
using namespace std;
typedef vector<ll> v;
int main(){
    int t;
    cin>>t;
    while (t--) {   
        int n;
        cin>>n;
        v a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i]; 
        }
        bool check = true;
        for (int i =1; i < n-1; i++) {
            if(a[i-1]<0) break;
            a[i] -= 2*a[i-1];
            a[i+1] -= a[i-1];
            a[i-1]-=a[i-1];

        }
        if (count(a.begin(), a.end(), 0)!=n) check = false;
        cout<<(check?"YES":"NO")<<endl;
    }
}