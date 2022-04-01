#include <iostream>
#include <stdlib.h>
#include <time.h>

#include <math.h>


using namespace std;

int main()
{
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



    cout << sinal_1 << " " << a << "(x^2) " << sinal_2 << " " << b << "x " << sinal_3 << " " << c << " = 0" << endl ;



    cout << endl ;

    cout << "Delta = (" << b << "^2) - 4 * " << a << " * " << c << endl ;



    cout << "Delta = " << (b * b) << " - " << (4 * a * c) << endl ;



    cout << "Delta = " << ((b * b) - (4 * a * c))  << endl ;



    cout << endl ;

    if (((b * b) - (4 * a * c)) >= 0) {


        double xI = (((b * (-1)) + sqrt(((b * b) - (4 * a * c)))) / (2 * a)) ;
        double xII = (((b * (-1)) - sqrt(((b * b) - (4 * a * c)))) / (2 * a)) ;

        cout << "x =( -(" << b << ") + ou - raiz de " << ((b * b) - (4 * a * c)) << ") / (2 * " << a << ")" << endl;

        cout << endl ;

        cout << "xI =( -(" << b << ") + raiz de " << ((b * b) - (4 * a * c)) << " ) / (2 * " << a << ")";

     

        cout << endl ;//sqrt(delta)

        cout << "xI =( " << (b * (-1)) << " + raiz de " << ((b * b) - (4 * a * c)) << " ) / " << (2 * a) << endl;

   

        cout << "xI =( " << (b * (-1)) << " + " << sqrt(((b * b) - (4 * a * c))) << " ) / " << (2 * a) << endl;

    

        cout << "xI = " << ((b * (-1)) + sqrt(((b * b) - (4 * a * c)))) << " / " << (2 * a) << endl;

 

        cout << "xI = " << (((b * (-1)) + sqrt(((b * b) - (4 * a * c)))) / (2 * a)) << endl;



        cout << endl ;

        cout << "xII =( -(" << b << ") - raiz de " << ((b * b) - (4 * a * c)) << " ) / (2 * " << a << ")";



        cout << endl ;//sqrt(delta)

        cout << "xII =( " << (b * (-1)) << " - raiz de " << ((b * b) - (4 * a * c)) << " ) / " << (2 * a) << endl;



        cout << "xII =( " << (b * (-1)) << " - " << sqrt(((b * b) - (4 * a * c))) << " ) / " << (2 * a) << endl;



        cout << "xII = " << ((b * (-1)) - sqrt(((b * b) - (4 * a * c)))) << " / " << (2 * a) << endl;



        cout << "xII = " << (((b * (-1)) - sqrt(((b * b) - (4 * a * c)))) / (2 * a)) << endl;

        cout << endl ;

        cout << sinal_1 << " " << a << "((" << xI << ")^2) " << sinal_2 << " " << b << "(" << xI << ") " << sinal_3 << " " << c << " = 0 : ";
        if ((((a * xI * xI)) + (b * xI) + c ) == 0) {
            cout << "V" << endl;
        } else {
            if (((((a * xII * xII)) + (b * xII) + c ) >= -1) && ((((a * xII * xII)) + (b * xII) + c ) <= 1)) {
                cout << "~" << endl;
            } else {
                cout << "F" << endl;
            }
            cout << sinal_1 << " " << a << "((" << xI << ")^2) " << sinal_2 << " " << b << "(" << xI << ") " << sinal_3 << " " << c << " = ";
            cout << (((a * xI * xI)) + (b * xI) + c ) << endl ;
        }

        cout << sinal_1 << " " << a << "((" << xII << ")^2) " << sinal_2 << " " << b << "(" << xII << ") " << sinal_3 << " " << c << " = 0 : ";
        if ((((a * xII * xII)) + (b * xII) + c ) == 0) {
            cout << "V" << endl;
        } else {
            if (((((a * xII * xII)) + (b * xII) + c ) >= -1) && ((((a * xII * xII)) + (b * xII) + c ) <= 1)) {
                cout << "~" << endl;
            } else {
                cout << "F" << endl;
            }


            cout << sinal_1 << " " << a << "((" << xII << ")^2) " << sinal_2 << " " << b << "(" << xII << ") " << sinal_3 << " " << c << " = ";
            cout << (((a * xII * xII)) + (b * xII) + c ) << endl ;
        }
    }


    if (((b * b) - (4 * a * c)) < 0) {



        cout << "x =( -(" << b << ") + ou - raiz de " << ((b * b) - (4 * a * c)) << ") / (2 * " << a << ")" << endl;

        cout << endl ;

        cout << "xI =( -(" << b << ") + raiz de " << ((b * b) - (4 * a * c)) << " ) / (2 * " << a << ")";



        cout << endl ;//sqrt(delta)

        cout << "xI =( " << (b * (-1)) << " + raiz de " << ((b * b) - (4 * a * c)) << " ) / " << (2 * a) << endl;



        cout << "xI =( " << (b * (-1)) << " + " << sqrt((((b * b) - (4 * a * c))) * (-1)) << " i ) / " << (2 * a) << endl;

   

        cout << endl ;

        cout << "xII =( -(" << b << ") - raiz de " << ((b * b) - (4 * a * c)) << " ) / (2 * " << a << ")";



        cout << endl ;//sqrt(delta)

        cout << "xII =( " << (b * (-1)) << " - raiz de " << ((b * b) - (4 * a * c)) << " ) / " << (2 * a) << endl;

  

        cout << "xII =( " << (b * (-1)) << " - " << sqrt((((b * b) - (4 * a * c))) * (-1)) << " i ) / " << (2 * a) << endl;


       


        cout << endl ;



    }

    system ("pause") ;
    return 0;
}
