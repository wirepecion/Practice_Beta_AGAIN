#include <bits/stdc++.h>
using namespace std;

int main(){
    
    char text[51] ;
    int arr[3] = {0,1,2};

    cin >> text ;
    
    int n =  strlen(text);

    for (int i = 0; i < n ; i++){

        if(text[i] == 'A'){
            swap(arr[0],arr[1]);
        }
        if(text[i] == 'B'){
            swap(arr[1],arr[2]);
        }
        if(text[i] == 'C'){
            swap(arr[0],arr[2]);
        }
    }

    for ( auto x : arr){
        if(arr[x] == 0){
            cout << x + 1;
        }
    }

    return 0;
}