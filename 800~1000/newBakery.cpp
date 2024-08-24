#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int time;
	cin>>time;
	while(time--){
		long long n, a, b;
		cin>>n>>a>>b;
		if (b<=a){ 
			cout<<n*a<<endl;
		}
		else{
			// cout<<"check"<<endl;
			long long k = min(n,b-a);
			cout<<k*(b+(b-k+1))/2+(n-k)*a<<endl;
		}
	}
}