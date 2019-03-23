#include <iostream>
using namespace std;
typedef long long int lli;

// matix method of calculating fibonacci is used
//this method multiply two matrices
void multiply(lli F[][2],lli M[][2],lli m){
    lli x=(F[0][0]*M[0][0]+F[0][1]*M[1][0])%m;
    lli y=(F[0][0]*M[0][1]+F[0][1]*M[1][1])%m;
    lli z=(F[1][0]*M[0][0]+F[1][1]*M[1][0])%m;
    lli w=(F[1][0]*M[0][1]+F[1][1]*M[1][1])%m;
    F[0][0]=x;
    F[0][1]=y;
    F[1][0]=z;
    F[1][1]=w;
}
// this function has a time complexity of O(lgn)
void power(lli F[][2],lli n,lli m){
    if(n==0||n==1)
        return;
    lli M[2][2]={{1,1},{1,0}};
    power(F,n/2,m);
    multiply(F,F,m);
    
    if(n%2!=0) multiply(F,M,m);
}
//calculating matrix^n and returning the F[0][0] of the resulting matrix  
lli fice(lli n,lli m){
    lli F[2][2]={{1,1},{1,0}};
    if(n==0) return 0;
    power(F,n-1,m);
    return F[0][0];
}
int main() {
	// your code goes here
	lli t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    cout<<2*fice(n,m)%m<<endl;
	}
	return 0;
}
