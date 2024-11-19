#include <iostream>
using namespace std;

// Funkcija za racunanje Fibonacci brojeva koristeci tip int
void fibonacciInt() {
    int a = 1, b = 2, temp, count = 2;
    cout << "Fibonacci brojevi za tip int:\n" << a << " " << b << " ";
    while (true) {
        temp = a + b;

        // Provera da li dolazi do prekoračenja
        if (temp < b) {
            cout << "\nPrekoracenje. Najveci broj: " << b << "\n";
            break;
        }

        cout << temp << " ";
        a = b;
        b = temp;
        count++;
    }
    cout << "\nBroj elemenata: " << count << "\n";
}

// Funkcija za racunanje Fibonacci brojeva koristeci tip long
void fibonacciLong() {
    long a = 1, b = 2, temp;
    int count = 2;
    cout << "Fibonacci brojevi za tip long:\n" << a << " " << b << " ";
    while (true) {
        temp = a + b;

        // Provera da li dolazi do prekoračenja
        if (temp < b) {
            cout << "\nPrekoracenje. Najveci broj: " << b << "\n";
            break;
        }

        cout << temp << " ";
        a = b;
        b = temp;
        count++;
    }
    cout << "\nBroj elemenata: " << count << "\n";
}

// Funkcija za racunanje Fibonacci brojeva koristeci tip long long
void fibonacciLongLong() {
    long long a = 1, b = 2, temp;
    int count = 2;
    cout << "Fibonacci brojevi za tip long long:\n" << a << " " << b << " ";
    while (true) {
        temp = a + b;

        // Provera da li dolazi do prekoračenja
        if (temp < b) {
            cout << "\nPrekoracenje. Najveci broj: " << b << "\n";
            break;
        }

        cout << temp << " ";
        a = b;
        b = temp;
        count++;
    }
    cout << "\nBroj elemenata: " << count << "\n";
}

int main() {
    // Pozivamo sve tri funkcije za prikaz rezultata
    fibonacciInt();
    fibonacciLong();
    fibonacciLongLong();

    return 0;
}

// a) Mozemo smestiti prbih 46 brojeva Fibonaccijevog niza (46. broj je 1836311903)
// b) Mozemo smestiti prvih 92 brojeva Fibonaccijevog niza (92. broj je 7540113804746346429)
// c) Mozemo smestiti isto prvih 92 brojeva kao i za long (92. broj je 7540113804746346429)