# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, f, k;
		cin>>n>>f>>k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}

		int x = a[f-1];
		sort(a.begin(), a.end(), [](int a, int b){return a > b;});
	
		if (x < a[k-1]) cout<<"NO"<<endl;
		else if (x > a[k-1]) {
			cout<<"YES"<<endl;
		}
		else {
			if (k<a.size()&&x==a[k]) cout<<"MAYBE"<<endl;
			else cout<<"YES"<<endl;
		}
	}
}