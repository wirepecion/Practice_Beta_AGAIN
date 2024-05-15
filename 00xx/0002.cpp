#include<bits/stdc++.h>
using namespace std;
int main(){

  int x,a,max=-2000000000,min=2000000000;
  cin>>x;

  while(x--){
    cin>>a;
        if(a>max) max=a;
        if(a<min) min=a;
  }

  cout<<min<<"\n"<<max;

  return 0 ;
}