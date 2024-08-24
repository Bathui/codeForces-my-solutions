# include <iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	int x1,x2,x3;
	while(time--){
		cin>>x1>>x2>>x3;
		if(x1==x2&x1==x3) cout<<0<<endl;
		else{
			if(x1<=x2&&x2<=x3||x1>=x2&&x2>=x3) cout<<abs(x2-x1)+abs(x3-x2)<<endl;
			else if(x1>=x2&&x1<=x3||x1<=x2&&x1>=x3) cout<<abs(x1-x2)+abs(x1-x3)<<endl;
			else if(x3>=x1&&x3<=x2||x3<=x1&&x3>=x2) cout<<abs(x3-x1)+abs(x3-x2)<<endl;
		}
	}
}