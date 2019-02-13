#include <iostream>
#include <stack>
using namespace std;

void stpar(stack<int> S,int a[],int n ){
    int count=0,flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==count+1){
            count++;
        }else{
            if(S.empty()){
                S.push(a[i]);
            }else{
                if(S.top()==count+1){
                    count++;
                    S.pop();
                    i--;
                }else if(S.top()>a[i]){
                    S.push(a[i]);
                }else{
                    flag=1;
                    break;
                }
            }
        }
    }
    
    while(!S.empty()){                                              //elements might be left in the stack
        if(flag==0)                                                 //empties the stack for further use
            count++;
        S.pop();
    }
    
    if(count==n){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
}

int main() {
	// your code goes here
	int n,a[1001];
	stack<int> S;
	cin>>n;
	while(n!=0){                                                    //0 should be at the end after the complete input
    	for(int i=0;i<n;i++){
    	    cin>>a[i];
    	}
    	stpar(S,a,n);
    	cin>>n;
	}
	return 0;
}
