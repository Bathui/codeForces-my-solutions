# include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int x1, y1, x2, y2;
	while (t--) {
		cin>>x1>>y1>>x2>>y2;
		if ((x1<y1)&&(x2<y2)||(x1>y1)&&(x2>y2))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}