
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("cnt.txt","r",stdin);
    string s;
    getline(cin,s);

   // cout<<s;
   int i,j,cnt=0,len,vowel=0,consonant=0;
   len = s.size();

  // vector<char>v,c;
   set<char>v,c;

   for(i=0;i<len;i++){
    if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
    if((s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')||(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'))
        {

            //v.push_back(s[i]);
            v.insert(tolower(s[i]));
        }

    else {
        c.insert(tolower(s[i]));
    }
   }
  cout<<"number of existing vowel :-> [ ";
  for(auto it:v) cout<<it<<' ';

  cout<<"]"<<endl;
  cout<<"number of existing consonant :->[ ";
  for(auto it:c) cout<<it<<' ';
  cout<<"]"<<endl;




}


