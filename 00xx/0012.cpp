#include <bits/stdc++.h>
using namespace std;

int main(){

    char alphabet [16];

    cin >> alphabet ;

    int n = sizeof(alphabet);

    for (int i = 0 ; i < n ; i ++){

        for (int j = 0 ; j < 5 ; j++){

            for (int k = 0 ; k < 5 ; k++){

                if ( k == abs(j+2) || k == abs(j-2) || k == -j + 6)
                {
                    if ((i+1) % 3 == 0)
                    {
                        cout << '*';
                    }
                    else
                    {
                        cout << '#';
                    }
                }

                else
                {
                    if ( j == k && k == 2 )
                    {
                        cout << alphabet[i];
                    }
                    else
                    {
                        cout << '..#..';
                    }
                }

            }

        cout << endl ;
        }

        
    }
    return 0;
}


/*
5 5


..#..
.#.#.
#.A.#
.#.#.
..#..
*/