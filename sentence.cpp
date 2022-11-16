//a sentence given in present indefinite form using CNF

#include<bits/stdc++.h>

using namespace std;
int main()
{
   // string s,sub,pre;
   vector<string> PN = {"Sagor","Salim","Salma","Nipu"};
    vector<string> P = {"he","she","I","you","we","they"};
    vector<string> N = {"book","cow","dog","home","grass","rice","mango"};
    vector<string> V = {"read","eat","take","run","write"};

   // char str[10];
    int i,j,k;
   // for(i=0;i<str.size();i++ ) cin>>str[i];
   // cout<<s;
   
  // for(i=0;i<4;i++)
   //cout<<PN[i]<<" "; cout<<endl;
   //cout<<PN.size();
   vector<string> s(100);
   for(i=0;i<s.size();i++) cin>>s[i];
   for(i=0;i<s.size();i++) cout<<s[i]<<" "; cout<<endl;
   
   bool chk = false,chk1=false,chk2 = false;
    for(i=0;i<PN.size();i++){
     if(PN[i]==s[0]) {
       chk = true;
       break;
     }
    }

     for(i=0;i<V.size();i++){
     if(V[i]==s[1]) {
       chk1 = true;
       break;
     }
    }

     for(i=0;i<N.size();i++){
     if(N[i]==s[2]) {
       chk2 = true;
       break;
     }
    }

    if((chk && chk1) && chk2 ) cout<<"Valid Input";
    else cout<<"invalid Input";


}
