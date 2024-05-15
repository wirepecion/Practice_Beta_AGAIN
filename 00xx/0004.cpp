#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int C=-1,c=-1;

  for(auto i:s)
  {
    if('A'<=i && i<='Z') C=1;
    if('a'<=i && i<='z') c=1;
  }

  if((C==1)&&(c==1)) cout<<"Mix";
  else
  {
    if(C==1) cout<<"All Capital Letter";
    if(c==1) cout<<"All Small Letter";
  }

    return 0 ;

}