#include<bits/stdc++.h>
#include<stack>
using namespace std;

int precedence(char c) {
  if(c=='^')
    return 3;
   else if(c=='*' || c=='/')
    return 2;
  else if(c=='+' || c=='-')
    return 1;
    else
     return 0;     
    
}
int isOperator(char x){
    if(x=='+'|| x=='-' || x=='*' || x=='/' || x=='^' || x=='(' || x==')')
     return 1;
    else
     return 0; 
}
string convertInfixToPostfix(string infix) {
    stack<char> s;
    string postfix="";
    int i=0;
    while(i<infix.length()) {
        char ch=infix[i];
        if(!isOperator(infix[i]))
        {
           postfix.push_back(ch);
           i++;
        }
        else{
            if(s.empty() || precedence(infix[i])>precedence(s.top())){
                s.push(ch);
                i++;
            }
            else{
                postfix.push_back(s.top());
                s.pop();
            }
        }}
        while(!s.empty()){
            postfix.push_back(s.top());
            s.pop();}
        return postfix;    
}

int main() {
    string infix;
    cin>>infix;
    cout<<convertInfixToPostfix(infix);

    return 0;
}


