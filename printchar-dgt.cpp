//count the character word letter and digit

#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cnt.txt","r",stdin);
    string s;
    getline(cin,s);

   // cout<<s;
   vector<char> letter,ch,dgt;
   int i,j,cnt=0,len;
   len = s.size();

   for(i=0;i<len;i++){
    if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
        letter.push_back(s[i]);
    }
    else if(s[i]>='0' && s[i]<='9'){
        dgt.push_back(s[i]);
    }
    else {
            ch.push_back(s[i]);

    }

   }
   cout<<"[ ";
  for(auto it:letter) cout<<it<<' ';

  cout<<"]"<<endl;
  cout<<"[ ";
  for(auto it:dgt) cout<<it<<' ';
  cout<<"]"<<endl;
  cout<<"[ ";
  for(auto it:ch) cout<<it<<' ';
  cout<<"]"<<endl;




}

