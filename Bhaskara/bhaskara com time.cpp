#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(){
	int a , b ,c ;
    string sinal_1 ,sinal_2 ,sinal_3 ;
    cout << "a:" ;
    cin >> a ;
    cout << "b:" ;
    cin >> b ;
    cout << "c:" ;
    cin >> c ;
    cout << endl ;
	
	if (a >= 0) {
        sinal_1 = "+" ;
    } else {
        sinal_1 = " \b" ;
    }
    if (b >= 0) {
        sinal_2 = "+" ;
    } else {
        sinal_2 = " \b" ;
    }
    if (c >= 0) {
        sinal_3 = "+" ;
    } else {
        sinal_3 = " \b" ;
    }
    
    wait (500);

    cout << sinal_1 << " " << a << "(x^2) " << sinal_2 << " " << b << "x " << sinal_3 << " " << c << " = 0" << endl ;

    sleep (500);

    cout << endl ;

    cout << "Delta = (" << b << "^2) - 4 * " << a << " * " << c << endl ;

    sleep (500);

    cout << "Delta = " << (b * b) << " - " << (4 * a * c) << endl ;

    sleep (500);

    cout << "Delta = " << ((b * b) - (4 * a * c))  << endl ;

    sleep (500);

system ("pause") ;
return 0;
}
