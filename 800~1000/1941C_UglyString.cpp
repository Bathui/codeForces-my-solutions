# include <iostream>
# include <string>
# include <vector>
# define endl "\n"
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> v {"mapie", "map", "pie"}; 
    while (t--) {
        int n, count=0; string s;
        cin>>n>>s;
        for (auto a: v) {
            int pos = 0;
            pos = s.find(a, pos);
            while (pos!=string::npos) {
                s[pos+a.length()/2] = '?' ;
                count++;
                pos = s.find(a, pos+1);
            }
        }
        
        cout<<count<<endl;
    }
}