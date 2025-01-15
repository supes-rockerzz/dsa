  #include<bits/stdc++.h>
using namespace std;
   void solve(string digits,string temp,int i,vector<string> &ans,string mapping[]){
    if(i>=digits.length()){
        ans.push_back(temp);
        return;
    }
    int num=digits[i]-'0';
    string value=mapping[num];
    for(int j=0;j<value.length();j++){
        temp.push_back(value[j]);
        solve(digits,temp,i+1,ans,mapping);
        temp.pop_back();
    }
   }
    vector<string> letterCombinations(string digits) {
       vector<string> ans;
        if(digits.length()==0)
        return ans;
        string temp="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,temp,0,ans,mapping);
        return ans;
    }
  int main(){
    string digits;
    cin>>digits;
    vector<string> output=letterCombinations(digits);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
  }  