# include <iostream>
# include <vector>
using namespace std;
int main(){
	int time;
	cin>>time;
	int length;
	while (time--) {
		cin>>length;
		vector<int> v1(length);
		for (int i = 0; i < length; i++) {
			cin>>v1[i];
		}
		
		if (v1[0] == v1[length-1]) cout<<"NO"<<endl;
		else{
			cout<<"YES\n"<<"";
			string a(length, 'B');
			a[1] = 'R';
			cout<<a<<endl;
		}
	}
}