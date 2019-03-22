#include <iostream>
using namespace std;
/* Recursive Solution Complexity: O(b)
int squares(int b){
     if(b/2<=1)
         return 0;
     else 
         return b/2-1 + squares(b-2);
}*/
//Non recursive solution Complexity: O(1)
int squares(int b){    
    return b/2*(b/2-1)/2;
}
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<squares(n)<<endl;    
	}
	return 0;
}
