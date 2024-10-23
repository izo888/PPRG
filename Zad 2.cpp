#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj Liczbę: " <<endl;
    cin >> liczba;
    if (liczba > 0) {
        cout <<"Twoja liczba jest dodatnia" << endl;
    }
    else if (liczba<0) {
        cout <<"Twoja liczba jest ujemna" << endl;
    }
    else {
        cout <<"Twoja liczba jest równa zeru" <<endl;
    }
    return 0;
}