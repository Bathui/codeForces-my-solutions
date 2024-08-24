# include <iostream>
# include <algorithm>
# define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		int n, count = 0;
		string s;
		cin>>n>>s;
		int mx = -1, mn = n;
		for (int i = 0; i < n; i++) {
			if (s[i]=='1') {
				count++;
				mx = max(mx, i);
				mn = min (mn, i);
			}
		}
		if (count%2==0&&mx-mn!=1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}