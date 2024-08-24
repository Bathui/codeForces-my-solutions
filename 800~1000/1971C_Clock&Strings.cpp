# include <iostream>
# define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		string s;
		for (int i = 1; i <= 12; i++) {
			if (i==a||i==b) s+='a';
			if (i==c||i==d) s+='c';
		}
		if(s == "acac"|| s=="caca") cout<<"YES"<<endl;
		else cout<<"NO"<<endl;	
	}
}