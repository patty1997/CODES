#include <iostream>
#include <string>
#include <regex>
#include <stack>
using namespace std;
int anarco(string s){
    stack<char> S;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{')
            S.push(s[i]);
        else if(s[i]=='}'){
            if(S.empty()){
                S.push('{');
                count++;
            }else{
                S.pop();
            }
        }
    }
    int c=0;
    while(!S.empty()){
        S.pop();
        c++;
    }
    count+=c/2;
    return count;
}
int main() {
	// your code goes here
	string s;
	int i=0;
	regex b("-*");
	cin>>s;
	while(!regex_match(s,b)){
	    i++;
	    cout<<i<<". "<<anarco(s)<<endl;
	    cin>>s;
	}
	return 0;
}
