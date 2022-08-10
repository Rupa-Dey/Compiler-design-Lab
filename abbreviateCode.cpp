#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("cnt.txt","r",stdin);
    string str;
    cin>>str;
    map<string,string>mp;
    mp[str] = "Computer Science & Engineering,3rd year,1st Semester,Compiler Design,theory";

    for(auto it:mp)
    cout<<it.first<<" = \n"<<it.second;
}
