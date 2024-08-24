#include <bits/stdc++.h>
using namespace std;

main(){

    string s;
    cin>>s;

    bool upper = false, lower = false;

    for(auto i:s)
    {
        if('A'<=i && i<='Z') upper = true;
        if('a'<=i && i<='z') lower = true;
    }


    if(upper && lower) cout<<"Mix";
    else
    {
        if(upper) cout<<"All Capital Letter";
        if(lower) cout<<"All Small Letter";
    }

    return 0;
}