# include <iostream>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        string a;
        cin>>a;
        ll b=0, cnt = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i]=='1') b++;
            else if (b>0) {
                cnt+=b+1;
            }
        }
        cout<<cnt<<endl;
    }
}
