#include <bits/stdc++.h>
using namespace std;

int main(){
    int number[3];
    char s[4];
    /* 625 */

    for (int i = 0 ; i < 3 ; i ++){
        cin >> number[i];
    }

    sort(number, number + 3);
    /* 256 */

    cin >> s;
    /* CBA*/

    for (int i = 0 ; i < 3 ; i ++){
        cout << number[s[i]-'A']<<" ";
        /* s[i]-'A' if i = 0 (first in s is C)
            s[i]-'A' = 'C'-'A' = 2
            number[2] that keep the value of C char*/ 
    }

    return 0 ;

}