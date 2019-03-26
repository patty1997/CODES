#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll lemusic(vector<pair<ll,ll>> v){
    sort(v.begin(),v.end());
    int distinct_size=1;
    ll res=0;
    for(int i=1;i<v.size();i++){
        if(v[i].first!=v[i-1].first){
            distinct_size++;
        }
    }
    ll f[distinct_size];
    f[0]=v[0].second;
    for(int i=1,j=1;i<v.size();i++){
        if(v[i].first!=v[i-1].first){
            f[j]=v[i].second;
            j++;
        }
        else{
            res+=v[i].second*distinct_size;
        }
    }
    sort(f,f+distinct_size);
    for(int i=0;i<distinct_size;i++){
        res+=(i+1)*f[i];
    }
    return res;
}
int main() {
	// your code goes here
	int t,n;
	ll b,l;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<pair<ll,ll>> v;
	    for(int i=0;i<n;i++){
	        cin>>b>>l;
	        v.push_back(make_pair(b,l));
	    }
	    cout<<lemusic(v)<<endl;
	}
	return 0;
}
