//.name: Rupa
//.........CNF --9 no
#include<bits/stdc++.h>
using namespace std;
int main(){

 int n;
 //cin>>n;
  vector<string> s(3);

  int i,j,k;
  //s.clear();

  for(i=0;i<s.size();i++) cin>>s[i];


  //for (auto it:s)   cout<<it<<" " ;

    cout<<'\n';
  vector<string> PN = {"Sagor","Salim","Salma","Nipu"};
     vector<string> P = {"he","she","I","you","we","they"};
    vector<string> N = {"book","cow","dog","home","grass","rice","mango"};
    vector<string> V = {"read","eat","take","run","write"};

  bool chk1 = false,chk11 = false,chk2 = false,chk3 = false, chk31 = false;
   for(auto it:PN) {

    if(s[0]== it)  {
         chk1 = true;
    break;
            }
    else continue;
  }

  for(auto it:P) {

    if(s[0]== it)  {
         chk11 = true;
    break;
            }
    else continue;
  }

  for(auto it:V) {

    if(s[1]== it)  {
         chk2 = true;
    break;
            }
    else continue;
  }

   for(auto it:N) {

    if(s[2]== it)  {
         chk3 = true;
    break;
            }
    else continue;
  }


  if((chk1 || chk11)==true && (chk2 || (chk2 &&chk3)==true)) cout<<"valid input";
  //else  if((chk1 || chk11)==true && chk2==true) cout<<"valid input";  //rupa
  else cout<<"Invalid";



}
