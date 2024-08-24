#include <iostream>
#include <vector>
#include <string>
# define endl "\n"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n; 
        vector<int> alph(26, 0);
        cin>>n;
        vector <int> trace(n); string res(n, '?');
        for (int i = 0; i < n; i++) {
            cin>>trace[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                if (alph[j]==trace[i]){
                    res[i] = 'a'+j;
                    alph[j]++;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
}