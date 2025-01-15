#include <bits/stdc++.h> 
using namespace std;
void solve(string &str,int i, int j){
	if(i>j){
		return;
	}
	swap(str[i],str[j]);
	i++;
	j--;
	solve(str,i,j);
}
string reverseString(string str)
{
	int i=0;
	int j=str.length()-1;
	solve(str,i,j);
	return str;
}

int main(){
    string str="abcde";
    cout<<reverseString(str);
}