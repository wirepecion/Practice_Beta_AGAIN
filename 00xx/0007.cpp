#include <bits/stdc++.h>
using namespace std;

int main(){

    double r , area , taxiarea ;

    cin >> r;

    area = M_PI * r * r ;
    taxiarea = 4 * r * r / 2 ;

    cout<< fixed << setprecision(6) << area << endl <<taxiarea ;

    return 0;
}