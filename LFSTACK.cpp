#include <iostream>
#include <stack>
using namespace std;
string lfstack(int a[][1000001],int l[1000001],int p[1000001],int m,int n){
        
}
int main() {
	// your code goes here
	int t,a[1000001][1000001],n,m,l[1000001],p[1000001],o[1000001];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>m;
	        l[i]=m;
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	        p[i]=a[i][0];
	    }
	    cout<<lfstack(a,p,l,m,n)<<endl;
	}
	return 0;
}
