#include <iostream>
using namespace std;

int main() {
  int a,b,c,d;
  cin >>a>>b>>c;
  d = a+b+c;
    if (d <= 100 && d >= 80) {
        cout<<"A";
    } else if (d < 80 && d >= 75) {
         cout<<"B+";
    } else if (d < 75 && d >= 70) {
	 cout<<"B";
    } else if (d < 70 && d >= 65) {
         cout<<"C+";
    } else if (d < 65 && d >= 60) {
         cout<<"C";
    } else if (d < 60 && d >= 55) {
         cout<<"D+";
    } else if (d < 55 && d >= 50) {
       cout<<"D";
    } else if (d < 50 && d >= 0) {
        cout<<"F";
    }
  return 0;
}