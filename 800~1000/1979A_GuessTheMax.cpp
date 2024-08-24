# include <iostream>
# include <vector>
// # include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		vector <int> v(n);
		for (int i = 0; i < n; i++) {
			cin>>v[i];
		}
		int m = 1e9, temp;
		for (int i = 0; i < n-1; i++) {
			if (v[i] == v[i+1]) m = min(m, v[i]-1);
			else {
				m = min(max(v[i], v[i+1])-1, m);
			}
		}
		cout<<m<<endl;
	}
}