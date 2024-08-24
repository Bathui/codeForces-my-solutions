# include <iostream>
# define endl "\n"
using namespace std;
typedef long long ll;
int main (){
	int t;
	cin>>t;
	while (t--){
		ll a, b, m, na, nb;
		cin>>a>>b>>m;
		if ((m+1)%a==0) na = (m+1)/a;
		else na = (m+1)/a+1;
		if ((m+1)%b == 0) nb = (m+1)/b;
		else nb = (m+1)/b+1;
		cout<<na+nb<<endl; 
	}
}