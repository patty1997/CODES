#include <iostream>
#include <string>
#include <stack>
using namespace std;

int compiler(string s){
    stack<char> S;
    int c=0,count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='<'){
            if(S.empty()){
                c=0;
            }
            S.push(s[i]);
        }else{
            if(S.empty())
                break;
            S.pop();
            c+=2;
        }
        if(S.empty())
            count+=c;
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	string s;
	cin>>t;
	while(t--){
	    cin>>s;
	    cout<<compiler(s)<<endl;
	}
	return 0;
}
