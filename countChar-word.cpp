//count the character word letter and digit

#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("cnt.txt","r",stdin);
    string s;
    getline(cin,s);

   // cout<<s;
   int i,j,cnt=0,len,dgt=0,letter=0,ch=0;
   len = s.size();

   for(i=0;i<len;i++){
    if(s[i]==' ') cnt++;
    else if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) letter++;
    else if(s[i]>='0' && s[i]<='9') dgt++;
    else ch++;

   }
   cout<<"no of word is :--> "<<cnt+1<<'\n';
   cout<<"no of  letters are :--> "<<letter<<'\n';
   cout<<"all the digit number is :--> "<<dgt<<'\n';
   cout<<"number of other character :--> "<<ch<<'\n';



}
