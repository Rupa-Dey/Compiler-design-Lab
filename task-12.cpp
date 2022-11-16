#include<bits/stdc++.h>
using namespace std;

int chkop(char ch){
    if(ch=='+'|| ch=='-' || ch=='*'|| ch=='/')
      return 1;
    else return 0;
}

int chkValidity(string s)
{
    stack<char>st;
    int l = s.size();
    int i,j,k;
    if(chkop(s[l-1])) return 0;
    for(i=0;i<l-1;i++){
        if(chkop(s[i]) && (s[i+1]==')'||chkop(s[i+1]))) return 0;
        else if(s[i]==')' && ( s[i+1]=='('|| isdigit(s[i+1]) || isalpha(s[i+1]))) return 0;
        else if(s[i]=='(' && (isalpha(s[i+1]) ||(s[i+1])==')' || chkop(s[i+1]))) return 0;
        else if(isdigit(s[i])   && (s[i+1]=='(')) return 0;

        else if(s[i]=='(') st.push('(');
        else if(s[i]==')'){
            if(st.empty()) return 0;
            st.pop();
        }
    }

    if(s[l-1]=='(') st.push('(');
    else if(s[l-1]==')')
    {
        if(st.empty()) return 0;
        st.pop();
    }
    if(st.empty()) return 1;
    else return 0;
   

}
int main(){


    string s;
    cin>>s;

    if(chkValidity(s))
       cout<<"Valid";
    else cout<<"Invalid";
}