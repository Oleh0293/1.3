#include <iostream>
#include <iomanip>
#include "Money.h"
#include <Windows.h>

using namespace std;

int main()
{
    Money x, a, b;
    x.Read   (a, b);
    x.Display(a, b);
    cout << " SUMMA: " << x.ToString(a, b) << endl;
    x.Money::Dif(a, b);
    Money s;
    SetConsoleCP      (1251);
    SetConsoleOutputCP(1251);
    int choice;
    do {
        cout << "«роб≥ть виб≥р: "                    << endl;
        cout << "[1] - помножити N на суму 1"        << endl;
        cout << "[2] - помножити N на суму 2"        << endl;
        cout << "[3] - помножити N на загальну суму" << endl;
        cout << "[0] - завершити виведенн€"          << endl;
        cout << "¬вед≥ть значенн€: "; cin >> choice;
        cout                                         << endl;

        switch (choice)
        {
        case 1:
            s.Mult_1(a, b);
            break;
        case 2:
            s.Mult_2(a, b);
            break;
        case 3:
            s.Mult_3(a, b);
            break;
        }
        cout << endl;


    } while (choice != 0);



    return 0;
}