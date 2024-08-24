# include <iostream>
# define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n, m, k;
		cin>>n>>m>>k;
		
		if ((n%m==0)&&(n-n/m<=k)) cout<<"NO"<<endl;
		else if((n%m!=0)&&(n-(n/m+1)<=k)) cout<<"NO"<<endl;
		else if ((n%m==0)&&(n-n/m>k)) cout<<"YES"<<endl;
		else if((n%m!=0)&&(n-(n/m+1)>k)) cout<<"YES"<<endl;
	}
}