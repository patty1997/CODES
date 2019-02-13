#include <iostream>
#include <stack>
using namespace std;

int pred(char o){
    if(o=='^')
        return 5;
    if(o=='/')
        return 4;
    if(o=='*')
        return 3;
    if(o=='-')
        return 2;
    if(o=='+')
        return 1;
    if(o=='(')
        return 0;
}

void onp(char e[]){
    stack<char> S;
    for(int i=0;e[i]!='\0';i++){
        if(isalpha(e[i])){
            cout<<e[i];
        }else{
            if(e[i]=='('){
                S.push(e[i]);
            }else if(e[i]=='^'||e[i]=='+'||e[i]=='-'||e[i]=='*'||e[i]=='/'){
                if(S.empty()){
                    S.push(e[i]);
                }
                else if(pred(e[i])>=pred(S.top())){
                    S.push(e[i]);
                }else{
                    cout<<S.top();
                    S.pop();
                    S.push(e[i]);
                }
            }else if(e[i]==')'){
                while(S.top()!='('){
                    cout<<S.top();
                    S.pop();
                }
                S.pop();
            }
        }
    }
    while(!S.empty()){
        S.pop();
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	char e[401];
	while(t--){
	    cin>>e;
	    onp(e);
	    cout<<endl;
	}
	return 0;
}
