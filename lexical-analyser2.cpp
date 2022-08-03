/*ন মাং কর্মাণি লিম্পন্তি ন মে কর্মফলে স্পৃহা।
ইতি মাং যোহভিজানাতি কর্মভির্ন স বধ্যতে।। */
//..................................................
//Author_Name : Rupa Dey
//Date : 04/08/2022
//..................................................
#include <bits/stdc++.h>
using namespace std;
char gap = 32;
template<typename T> 
ostream& operator<<(ostream &os, const vector<T> &v) { 
    os << '{'; 
    for (const auto &x : v) os << gap << x;
        return os << '}'; 
}
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) {
        return os << '(' << p.first << gap << p.second << ')';
}

#define ll long long 
#define lll __int128_t
#define pb push_back
#define mp make_pair
#define All(x) (x).begin(),(x).end()
#define sz(z) (int)((z).size())
#define ok cout<<endl;
typedef pair < int,int> ii;
typedef vector<ii> vii;
typedef vector<ll>vl;
typedef vector<int> vi;
typedef vector<vi> vvi;

//................float_Variable..........
void floatVar(string str){
     bool chk = true;
    for(int i=0;i<str.size();i++){
      if((str[i]>='a' && str[i]<='z')  ||(str[i]>='0' && str[i]<='9')){
         chk = true;
     
        }
        else {
            chk = false;
            break;}}
  
  if(chk)
  {if((str[0]>='a' && str[0]<='h') || (str[0]>='A' && str[0]<='H') || (str[0]>='o' && str[0]<='z') || (str[0]>='O' && str[0]<='Z'))
    cout<<"Float Variable";} 
else cout<<"Invalid Input";
}

//.......floatNumber................
void numFloat(string str){
     bool chk = true;
    for(int i=0;i<str.size();i++){
      if((str[i]>='0' && str[i]<='9')|| str[i]=='.'){
         chk = true;
     
        }
        else {
            chk = false;
            break;}}
 
 int cnt=0;
 for(int i=0;i<str.size();i++){
    if(str[i]=='.')
    {
        while((str[i+1]>='0' && str[i+1]<='9')){
            cnt++;
        i++;
        } 
    }
 }  // cout<<cnt; ok
 if(chk && cnt==2)
 {if( (str[0]>='0' && str[0]<='9'))
    cout<<"Float Number";}  
else cout<<"Invalid Input";
}

//.......double number...............
void numDouble(string str){
     bool chk = true;
    for(int i=0;i<str.size();i++){
      if((str[i]>='0' && str[i]<='9')|| str[i]=='.'){
         chk = true;
     
        }
        else {
            chk = false;
            break;}}
 
 int cnt=0;
 for(int i=0;i<str.size();i++){
    if(str[i]=='.')
    {
        while((str[i+1]>='0' && str[i+1]<='9')){
            cnt++;
        i++;
        } 
    }
 }  // cout<<cnt; ok
 if(chk && cnt>2)
 {if( (str[0]>='0' && str[0]<='9'))
    cout<<"Double Number";}  
else cout<<"Invalid Input";
}

int main(){
  string str;
  cin>>str;
  int i,j;

   //floatVar(str);
   // numFloat(str);
   numDouble(str);
 
ok

}
//5number...
//handling error will occur...(-_-)