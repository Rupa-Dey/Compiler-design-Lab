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

//................shortInt..........
void shortINT(string str){

    bool chk = true;
    for(int i=0;i<str.size();i++){
        if(str[i]>='0' && str[i]<='9'){
         chk = true;
     
        }
        else {
            chk = false;
            break;}}
    
     if((str[0]>='1' && str[0]<='9') && (str.size()<=4 && chk) )
             cout<<"shortInt";
        else cout<<"Invalid Input";
       
  
}

//.......longINT................
void longtINT(string str){
      bool chk = true;
    for(int i=0;i<str.size();i++){
      if(str[i]>='0' && str[i]<='9'){
         chk = true;
     
        }
        else {
            chk = false;
            break;}}
   if((str[0]>='1' && str[0]<='9') && (str.size()>4 && chk))
    cout<<"longtInt";
else cout<<"Invalid Input";
}

//.......integerVariable...............
void varINT(string str){
      bool chk = true;
    for(int i=0;i<str.size();i++){
      if((str[i]>='a' && str[i]<='z')  ||(str[i]>='0' && str[i]<='9')){
         chk = true;
     
        }
        else {
            chk = false;
            break;}}
  
  if(chk) {if((str[0]>='i' && str[0]<='n') || (str[0]>='I' && str[0]<='N') )
    cout<<"integer Variable";}
else cout<<"Invalid Input";
}
int main(){
  string str;
  cin>>str;
  int i,j;

//shortINT(str);
//longtINT(str);
varINT(str);
 
ok

}
//4number...
//handling error can be occured...(-_-)