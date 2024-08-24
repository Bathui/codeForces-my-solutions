# include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		int l, r;
		cin>>l>>r;
		int num = 1, count = 0;
		while (1) {            // for this while loop, we can use __lg(r) to do the same thing
			num *= 2;
			if (num>r) {
				break;
			}
			count++;
		}
		cout<<count<<endl;
	}
}