#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj Liczbę: " << endl;
    cin >> liczba;
    if (liczba==0)
    {
        cout <<"Twoja liczba wynosi 0" <<endl;
    }
    else if (liczba % 2 == 0) 
    {
        cout <<"Twoja liczba jest parzysta" <<endl;
    }
    else
    {
        cout <<"Twoja liczba jest nieparzysta" <<endl;
    }
    return 0;
}