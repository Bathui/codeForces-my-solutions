# include <iostream>
# include <utility>
# include <vector>
# include <algorithm>
# define pr pair<int, int>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector <pr> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        a[i].first = cnt; a[i].second = -i;
        cnt += (s[i]=='(' ? 1:-1);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout<<s[-a[i].second];
    }

}