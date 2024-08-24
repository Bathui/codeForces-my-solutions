# include <iostream>
# include <vector>
# include <array>
# include <algorithm>
using namespace std;
array<int, 4>dx = {-1,0,1,0};
array<int, 4>dy = {0,-1,0,1};
bool inMatrix(int i, int j, int n, int m){
	return i<n&&i>=0&&j<m&&j>=0;
}
int main(){
	int time;
	
	cin>>time;
	while(time--) {
		int n, m;
		cin>>n>>m;
		vector<vector<int>> vec(n,vector<int>(m));
		//load elements
		for (int i = 0; i < n; i++) {
			for (int j = 0; j<m; j++) {
				cin>>vec[i][j];
			}
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j<m; j++) {
				int mx = 0;
				for (int k = 0; k < 4; k++) {
					if (inMatrix(i+dx[k], j+dy[k], n, m)){
						mx = max(mx, vec[i+dx[k]][j+dy[k]]);
					}					
				}
				vec[i][j] = min(mx, vec[i][j]);
				cout<<vec[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}