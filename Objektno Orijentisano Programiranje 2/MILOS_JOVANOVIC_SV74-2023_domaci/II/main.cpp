#include <iostream>
#include <string>

using namespace std;

// Funkcija koja konvertuje decimalni broj u heksadecimalni
string decToHex(int num) {

    // Ako je broj negativan, baca se izuzetak
    if (num < 0) {
        throw invalid_argument("Broj ne sme biti negativan.");
    }

    // Ako je broj 0, vraca se heksadecimalni zapis "0"
    if (num == 0) {
        return "0";
    }

    string result = ""; // Pripremamo praznu promenljivu za rezultat

    // Dok broj nije 0, delimo ga sa 16 i dodajemo ostatke u heksadecimalnom formatu
    while (num != 0) {
        int remainder = num % 16; // Ostatak pri deljenju sa 16
        if (remainder < 10) {
            // Ako je ostatak manji od 10, dodajemo broj (0-9) u rezultat
            result = to_string(remainder) + result;
        }
        else {
            // Ako je ostatak veci od 9, konvertujemo ga u odgovarajuci karakter (A-F)
            result = (char)(remainder + 55) + result;
        }
        num /= 16; // Delimo broj sa 16 za sledeci ciklus
    }
    return result; // Vraćamo heksadecimalni zapis broja
}

// Funkcija koja konvertuje heksadecimalni broj u decimalni
int hexToDec(string hex) {

    int result = 0;  // Zbir koji cemo vratiti
    int base = 0;    // Osnova za potencije broja 16

    // Ako je string prazan, bacamo izuzetak
    if (hex == "") {
        throw invalid_argument("Broj nije validan heksadecimalan broj.");
    }

    // Prolazimo kroz heksadecimalni string od pozadi prema napred
    for (int i = hex.length() - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            // Ako je karakter broj, pretvaramo ga u odgovarajuci decimalni broj
            result += (hex[i] - 48) * pow(16, base);
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            // Ako je karakter A-F, pretvaramo ga u decimalni broj
            result += (hex[i] - 55) * pow(16, base);
        }
        else {
            // Ako karakter nije validan, bacamo izuzetak
            throw invalid_argument("Broj nije validan heksadecimalan broj.");
        }
        base++; // Povecavamo osnovu za sledecu potenciju broja 16
    }
    return result; // Vracamo konvertovani decimalni broj
}

// Funkcija koja sabira dva heksadecimalna broja i vraca rezultat kao heksadecimalni broj
string sumOfHex(string hex1, string hex2) {
    return decToHex(hexToDec(hex1) + hexToDec(hex2)); // Sabiramo decimalne vrednosti i vracamo kao heksadecimalni broj
}

// Glavna funkcija koja testira prethodne funkcije
void main() {

    try {
        // Testiranje decToHex funkcije
        try {
            cout << "unsignedIntToHex(100): " << decToHex(100) << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        try {
            cout << "unsignedIntToHex(-100): " << decToHex(-100) << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        try {
            cout << "unsignedIntToHex(0): " << decToHex(0) << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        // Testiranje sumOfHex funkcije
        try {
            cout << "sumOfHex(\"A\", \"B\"): " << sumOfHex("A", "B") << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        try {
            cout << "sumOfHex(\"X\", \"Y\"): " << sumOfHex("X", "Y") << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        try {
            cout << "sumOfHex(\"\", \"\"): " << sumOfHex("", "") << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        // Testiranje hexToDec funkcije
        try {
            cout << "hexToDec(\"A\"): " << hexToDec("A") << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        try {
            cout << "hexToDec(\"X\"): " << hexToDec("X") << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        try {
            cout << "hexToDec(\"\"): " << hexToDec("") << endl;
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

    }
    catch (const invalid_argument& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
}
