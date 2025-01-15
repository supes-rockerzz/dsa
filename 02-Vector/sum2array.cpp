#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>a, int n, vector<int>b, int m) {
	int x=0,y=0;
	for(int i=0;i<n;i++){
         x=x*10+a[i];
	}
	for(int i=0;i<m;i++){
         y=y*10+b[i];
	}
	int sum=x+y;
	vector<int>c;
	while(sum!=0){
		c.push_back(sum%10);
		sum=sum/10;
	}
	for(int i=0,j=c.size()-1;i<j;i++,j--){
		swap(c[i],c[j]);
	}
    for(int i=0;i<c.size();i++){
          cout<<c[i]<<" ";
    }
}

int main(){
    vector<int> v1={1,2,3,4};
    vector<int> v2={6};
    findArraySum(v1,4,v2,1);
    
}