#include <iostream>
#include <stack>
using namespace std;
int o[1000001];
int size;
string lfstack(int a[][1000001],int l[1000001],int p[1000001],int m,int n){
    for(int i=0;i<size;i++){
        for(int j=0;j<n;j++){
            if(o[i]==a[j][p[j]]){
                p[j]++;
                break;
            }
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(p[i]!=l[i]){
            flag=1;
            break;
        }
    }
    if(flag) return "No";
    else return "Yes";
}
int main() {
	// your code goes here
	int t,a[1000001][1000001],n,m,l[1000001],p[1000001];
	cin>>t;
	while(t--){
	    size=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>m;
	        l[i]=m;
	        size+=m;
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	        p[i]=0;
	    }
	    for(int i=size-1;i>=0;i--){
	        cin>>o[i];
	    }
	    cout<<lfstack(a,p,l,m,n)<<endl;
	}
	return 0;
}
