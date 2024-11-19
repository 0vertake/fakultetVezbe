#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "myComplex.h"

using namespace std;

Complex expression_parser(string expression);
Complex complex_parser(string complex);
bool is_numeric(const string& str);
vector<string> split(const string& str, char delimiter);
void input_parser();


int main()
{
	input_parser();
}

void input_parser() {
    vector<string> operation_rows;
    ifstream file("input_file.txt");
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            operation_rows.push_back(line);
        }
        file.close();
    }

    for (string expression : operation_rows) {
		Complex result = expression_parser(expression);
    }
}

Complex expression_parser(string expression) {
	vector<string> expression_vector = split(expression, ' ');
	Complex num1 = complex_parser(expression_vector[0]);
	Complex num2 = complex_parser(expression_vector[2]);
	string operation = expression_vector[1];
    
	if (operation == "ADD") {
		return num1 + num2;
	}
	else if (operation == "SUB") {
		return num1 - num2;
	}
	else if (operation == "MUL") {
		return num1 * num2;
	}
	else {
        cout << "Invalid operation" << endl;
		break;
	}
    cout << expression + ":" << endl;
    cout << result << endl;
    cout << endl;
}


Complex complex_parser(string complex) {
    int plus_pos = complex.find('+');
    int minus_pos = complex.find('-');
    int i_pos = complex.find('i');

    if (i_pos == string::npos) {
        throw invalid_argument("Invalid complex number format");
    }

    int real = 0;
    int imag = 0;

    if (plus_pos != string::npos) {
        real = stoi(complex.substr(0, plus_pos));
        imag = stoi(complex.substr(plus_pos + 1, i_pos - plus_pos - 1));
    }
    else if (minus_pos != string::npos && minus_pos != 0) {
        real = stoi(complex.substr(0, minus_pos));
        imag = stoi(complex.substr(minus_pos, i_pos - minus_pos));
    }
    else {
        throw invalid_argument("Invalid complex number format");
    }

    return Complex(real, imag);
}


bool is_numeric(const string& str) {
    try {
        size_t pos;
        double value = stod(str, &pos);
        return pos == str.length();
    }
    catch (const invalid_argument&) {
        return false;
    }
    catch (const out_of_range&) {
        return false;
    }
}


vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    size_t start = 0, end = 0;

    while ((end = str.find(delimiter, start)) != string::npos) {
        token = str.substr(start, end - start);
        tokens.push_back(token);
        start = end + 1;
    }

    token = str.substr(start);
    tokens.push_back(token);

    return tokens;
}