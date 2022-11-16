#include<bits/stdc++.h>
using namespace std;

bool bVar(string s)
{
    bool chk = true;
    for(int i = 0;i<s.size();i++){
        if(isdigit(s[i]) || isalpha(s[i]) || s[i]=='_'){
            chk = true;
        }
        else {
            chk =false;
            break;
        }
    }

    if(chk){
        if(s[0]=='b' && s[1]=='n' && s[2]=='_') return true;
    }
    return false;
}

bool bNum(string s){
    bool chk = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='0' || s[i]=='1')
        {
            chk = true;
        }
        else{
            chk = false;
            break;
        }
        /* code */
    }
    if(chk && s[0]=='0') return true;
    return false;

    
}
int main()
{
    string s;
    cin>>s;

    if(bNum(s)) cout<<"valid\n";
    else if(bVar(s)) cout<<"valid\n";
    else cout<<"Invalid\n";

}