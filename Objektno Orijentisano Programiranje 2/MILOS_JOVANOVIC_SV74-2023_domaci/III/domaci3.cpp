#include <iostream>

using namespace std;

void shortFunction() {
    short val1;
    short val2;

    // Unos dva broja tipa short
    cout << "Unesite prvi broj: ";
    cin >> val1;
    cout << "Unesite drugi broj: ";
    cin >> val2;

    int min;  // promenljiva za manji broj
    int max;  // promenljiva za veci broj
    if (val1 < val2) {
        min = val1;  // ako je prvi broj manji, dodeljujemo manji broj
        max = val2;  // veći broj
    }
    else {
        min = val2;  // ako je drugi broj manji, dodeljujemo manji broj
        max = val1;  // veći broj
    }

    int sum = val1 + val2;  // zbir oba broja
    int dif = max - min;    // razlika izmedju većeg i manjeg broja
    int prod = val1 * val2; // proizvod oba broja
    int quot = max / min;   // količnik većeg broja podeljenog manjim

    // Ispis rezultata
    cout << "Manji broj: " << min << endl;
    cout << "Veci broj: " << max << endl;
    cout << "Zbir: " << sum << endl;
    cout << "Razlika: " << dif << endl;
    cout << "Proizvod: " << prod << endl;
    cout << "Kolicnik: " << quot << endl;
}

void intFunction() {
    int val1;
    int val2;

    // Unos dva broja tipa int
    cout << "Unesite prvi broj: ";
    cin >> val1;
    cout << "Unesite drugi broj: ";
    cin >> val2;

    int min;  // promenljiva za manji broj
    int max;  // promenljiva za veci broj
    if (val1 < val2) {
        min = val1;  // ako je prvi broj manji, dodeljujemo manji broj
        max = val2;  // veći broj
    }
    else {
        min = val2;  // ako je drugi broj manji, dodeljujemo manji broj
        max = val1;  // veći broj
    }

    int sum = val1 + val2;  // zbir oba broja
    int dif = max - min;    // razlika izmedju većeg i manjeg broja
    int prod = val1 * val2; // proizvod oba broja
    double quot = (val2 != 0) ? (double)val1 / val2 : 0;   // količnik (sa proverom deljenja nulom)

    // Ispis rezultata
    cout << "Manji broj: " << min << endl;
    cout << "Veci broj: " << max << endl;
    cout << "Zbir: " << sum << endl;
    cout << "Razlika: " << dif << endl;
    cout << "Proizvod: " << prod << endl;
    cout << "Kolicnik: " << quot << endl;
}

void doubleFunction() {
    double val1;
    double val2;

    // Unos dva broja tipa double
    cout << "Unesite prvi broj: ";
    cin >> val1;
    cout << "Unesite drugi broj: ";
    cin >> val2;

    double min;  // promenljiva za manji broj
    double max;  // promenljiva za veci broj
    if (val1 < val2) {
        min = val1;  // ako je prvi broj manji, dodeljujemo manji broj
        max = val2;  // veći broj
    }
    else {
        min = val2;  // ako je drugi broj manji, dodeljujemo manji broj
        max = val1;  // veći broj
    }

    double sum = val1 + val2;  // zbir oba broja
    double dif = max - min;    // razlika izmedju većeg i manjeg broja
    double prod = val1 * val2; // proizvod oba broja
    double quot = (val2 != 0) ? val1 / val2 : 0;  // količnik (sa proverom deljenja nulom)

    // Ispis rezultata
    cout << "Manji broj: " << min << endl;
    cout << "Veci broj: " << max << endl;
    cout << "Zbir: " << sum << endl;
    cout << "Razlika: " << dif << endl;
    cout << "Proizvod: " << prod << endl;
    cout << "Kolicnik: " << quot << endl;
}

int main()
{
    while (true) {
        cout << "(1) - short" << endl;
        cout << "(2) - int" << endl;
        cout << "(3) - double" << endl;

        string choice;
		cout << "Izaberite tip: ";
        cin >> choice;
        if (choice == "1") {
            shortFunction();
        }
        else if (choice == "2") {
            intFunction();
        }
        else if (choice == "3") {
            doubleFunction();
        }
        else {
            cout << "Pogresan unos\n" << endl;
        }
    }
}