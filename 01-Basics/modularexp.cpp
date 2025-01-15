#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int ans=1;
	while(n>0){
		if(n%2!=0){
			ans=(1LL*(ans)*(x)%m)%m;   // properties of modulo 
		}
		x=(1LL*(x)%m*(x)%m)%m; // 1LL is used to typecast int to long long
		n=n/2;
	}
	return ans;
}

int main(){
    int x,n,m;
    cin>>x>>n>>m;
    cout<<modularExponentiation(x,n,m)<<endl;
}