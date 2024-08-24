# include <iostream>
# include <vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--) {
		int n, m, k;
		cin>>n>>m>>k;
		vector<int> v(n);
		for(int i = 0; i < n-m; i++ ){
			v[i]= n-i;
		}
		v[n-1] = m;
		for (int i = n-2; i >= n-m; i--) {
			v[i] = v[i+1]-1;
		}
		for (auto a: v) {
			cout<<a<<" ";
		}
		cout<<"\n";
	}
}