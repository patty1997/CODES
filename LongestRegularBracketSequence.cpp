#include<bits/stdc++.h>
using namespace std;

void lrbs(string s){
    stack<int> S;
    int c[1000001],d[1000001];
    for(int i=0;i<s.length();i++){
        c[i]=d[i]=INT_MAX;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            if(!S.empty()){
                int top=S.top();
                S.pop();
                d[i]=top;
                c[i]=top;
                c[i]=min(c[d[i]-1],c[i]);
            }
        }
        else S.push(i);
    }
    int ans=0,count=1;
    for(int i=0;i<s.length();i++){
	if(s[i]==')'){
	    if(i-c[i]+1>ans){
		ans=i-c[i]+1;
		count=1;
	    }
	    else if(i-c[i]+1==ans){
	        count++;
	    }
	}
    }
    cout<<ans;
    if(ans==0)
        cout<<" "<<"1";
    else
        cout<<" "<<count;
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	lrbs(s);
	return 0;
}
