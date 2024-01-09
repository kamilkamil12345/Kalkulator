#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    float a,b;
    char w;

    cout << "Kalkulator." << endl;
    cout << "Podaj pierwsza liczbe, a:" << endl;    cin >> a;
    cout << "Podaj druga liczbe, b:" << endl;       cin >> b;
    system("cls");

    while(w!=5){

    cout << "Co robimy? Wybierz 1-4." << endl;
    cout << "1 - dodawanie a i b" << endl;
    cout << "2 - odejmowanie a i b" << endl;
    cout << "3 - mnozenie a i b" << endl;
    cout << "4 - dzielenie a i b" << endl;
    cout << "5 - Koniec" << endl;
    w = getch();
    system("cls");

    switch(w)
    {
        case '1':
        {
            cout << "Wybrano dodawanie a i b" << endl;
            cout << "a + b = " << a+b << endl;
            break;
        }
        case '2':
        {
            cout << "Wybrano odejmowanie a i b" << endl;
            cout << "a - b = " << a-b << endl;
            break;
        }
        case '3':
        {
            cout << "Wybrano mnozenie a i b" << endl;
            cout << "a * b = " << a*b << endl;
            break;
        }
        case '4':
        {
            cout << "Wybrano dzielenie a i b" << endl;
            if (b==0)   {cout << "b = 0! Dzielenie niemozliwe!" << endl;}
            else        {cout << "a : b = " << a/b << endl;}
            break;
        }
        case '5':         {exit(0);}
        default:        {cout << "Blad! Wybierz 1-4" << endl;   break;}
        system("cls");
    }}

return 0;
}
