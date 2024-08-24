# include <iostream>
# include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        char temp;
        cin>>n>>k;
        int dim = n/k;
        

        int cnt1= 0, cnt2 = 0;
        vector<vector<char>>a(dim,vector<char>(dim));
        for (int i = 0; i < n; i++) {
            // if (i%k==0) {cnt1++; cnt2==0;cout<<"check"<<endl;}
            for (int j = 0; j < n; j++) {
                cin>>temp;
                if (j%k==0&&i%k==0) {
                    a[cnt1][cnt2] = temp; 
                    cnt2++;
                }
                if (cnt2==dim) {cnt2=0; cnt1++;}
            }
            
            
        }
        for (int i = 0; i < dim; i++) {
            for (int j = 0; j < dim; j++) {
                cout<<a[i][j];
            }
            cout<<endl;
        }        
    }
}