//count the vowel and consonent

#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cnt.txt","r",stdin);
    string s;
    getline(cin,s);

   // cout<<s;
   int i,j,cnt=0,len,vowel=0,consonant=0;
   len = s.size();

   for(i=0;i<len;i++){
    if((s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')||(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'))
        vowel++;
    else consonant++;
   }
   cout<<"no of vowel is :--> "<<vowel<<'\n';
   cout<<"no of consonants are :--> "<<consonant<<'\n';




}

