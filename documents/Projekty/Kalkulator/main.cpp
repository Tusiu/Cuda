#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <curses.h>

using namespace std;

float x, y;
char wybor;

int main()
{
    for(;;)
    {
    cout << "Podaj 1 liczbe:";
    cin >> x;
    cout << "Podaj 2 liczbe:";
    cin >> y;

    cout << endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-------------" << endl;
    cout << "1. Dodawanie" <<endl;
    cout << "2. Odejmowanie" <<endl;
    cout << "3. Mnozenie" <<endl;
    cout << "4. Dzielenie" <<endl;
    cout << "5. Koniec programu" <<endl;

    cout <<endl;
   if (wybor);
   wybor=getchar();


    switch (wybor)
    {
    case '1':
            cout<< "Suma = "<<x+y;
        break;

    case '2':
            cout<< "Roznica = "<<x-y;
        break;

    case '3':
            cout<< "Iloczyn = "<<x*y;
        break;

    case '4':
        if (y==0) cout<< "Nie mozna dzielic przez zero!";

        else
        {
    cout<< "Iloraz = "<<x/y;
        }
        break;
    case '5':

        exit(0);

    default: cout<< "Nie ma takiej opcji w MENU!";

    }
    getchar();getchar();
    system ("clear");

    }
    return 0;
}
