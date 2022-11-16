// //..............
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //freopen("cnt.txt","r",stdin);
//     string s[10];
//    int i,j;
//    for(i=0;i<10;i++){
//    cin>>s[i];
//    }
//    vector<string>v,c;
//   for(i=0;i<9;i++) {

//     if((s[i][0]=='a'|| s[i][0]=='e' || s[i][0]=='i' || s[i][0]=='o' || s[i][0]=='u')||(s[i][0]=='A'|| s[i][0]=='E' || s[i][0]=='I' || s[i][0]=='O' || s[i][0]=='U'))
//         {
//           v.push_back((s[i]));
//        }
//     else c.push_back((s[i]));
//    }

//    cout<<"started with vowel word of sentence:-> [ ";
//   for(auto it:v) cout<<it<<' ';

//   cout<<"]"<<endl;
//   cout<<"started with consonant word of sentence :->[ ";
//   for(auto it:c) cout<<it<<' ';
//   cout<<"]"<<endl;

//     //cout<<s[i][0]<<'\n';
//    //vector<char>v,c;




// }
#include<bits/stdc++.h>
using namespace std;
int main()

{
    //freopen("input.txt","r",stdin);
    string s[10] ; //= "Munmun is the student of computer science and Eng";  //5 16 5 8
    
    for(int i=0;i<10;i++) cin>>s[i];
    //------>(a)
   vector<string> v,c;
    int cnt=0,i,j,ch=0,dgt=0,lt=0;
    for(i=0;i<9;i++)
    {
        if(isalpha(s[i][0])){s[i][0] = tolower(s[i][0]);

       if(s[i][0]=='a'|| s[i][0]=='e' || s[i][0]=='i' || s[i][0]=='o' || s[i][0]=='u'){
        
         // cnt++;
          v.push_back(s[i]);

       }

        else {ch++; c.push_back(s[i]);}}


    }
   
     for(auto it:v) cout<<it<<' ';
     cout<<'\n';
     cout<<"---------------->\n";
      for(auto it:c) cout<<it<<' ';
    cout<<endl;

}


