 #include<bits/stdc++.h>
using namespace std;
   void solve(string str,int i, vector<string> &ans){
    if(i>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        solve(str,i+1,ans);
    }
   }
    vector<string> permute(string str) {
        vector<string> ans;
        solve(str,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    int main(){
        string s;
        cin>>s;
        vector<string> output=permute(s);
        for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    }