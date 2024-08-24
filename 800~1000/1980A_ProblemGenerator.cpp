# include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		string q;
		int count = 0;
		int counter[7]= {0};
		int n, m;
		cin>>n>>m>>q;
		for (int i = 0; i < n; i++) {
			if (counter[q[i]-'A']< m){
				counter[q[i]-'A']++;
				count++;
			}
		}
		cout<<7*m-count<<endl;
	}
}