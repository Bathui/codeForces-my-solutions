# include <iostream>
# define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		string s;
		int n;
		cin>>n>>s;
		int count = 0;
		for (auto c: s) {
			if (c=='U') count++;
		}
		if (count&1) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}