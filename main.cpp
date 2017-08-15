#include <iostream>
using namespace std;

int main()
{
    float sueldo;
    cout << "Ingresa tu sueldo actual ";
    cin >> sueldo ;
    if (sueldo >= 0 && sueldo <=1000)
    {
        sueldo = sueldo * 1.18 ;
        cout << "tu nuevo sueldo es : " << sueldo ; }
    else if (sueldo >=1001 && sueldo <=1100)
    {
        sueldo = sueldo * 1.15;
        cout << "tu nuevo sueldo es : " << sueldo ;}
            else if ( sueldo >=1101 && sueldo <=1200)
            {
                sueldo = sueldo * 1.12;
                cout <<" tu nuevo sueldo es : " << sueldo ;}
                    else if ( sueldo >=1201 && sueldo <=1300)
                    {
                        sueldo = sueldo * 1.10;
                        cout <<" tu nuevo sueldo es : " << sueldo ;}
                        else
                        {
                            sueldo = sueldo * 1.08 ;
                            cout << "tu nuevo sueldo es : " << sueldo ; }

    return 0 ;
}
