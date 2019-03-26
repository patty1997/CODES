#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	int t;
	ll n1,n2,m,d,n;
	cin>>t;
	while(t--){
	    cin>>n1>>n2>>m;
	    d=max(n1,n2)-min(n1,n2);
	    n=min(n1,n2)-min((m*(m+1)/2),min(n1,n2));
	    cout<<d+2*n<<endl;
	}
	return 0;
}
