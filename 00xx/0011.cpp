#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int T = 10 , n  , sum = 0; 
    int arr[42];
    memset(arr, 0 , sizeof(arr));
    // memset(str, 't', sizeof(str));

    while(T--){
        cin >> n;
        arr[n%42] = 1;
    }

    for (int i = 0 ; i < 42 ; i++){
        sum += arr[i];
    }

    cout << sum ;

    return 0;
}
