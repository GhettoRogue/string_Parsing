#include <iostream>
#include <string>

using namespace std;

string Parser(string &input, char delimiter) {
    int position = input.find(delimiter);
    string result = input.substr(0, position);
    input = input.substr(position + 1);
    return result;
}

int main() {
    string input;
    cout << "������: �������;���;����⢮;��� ஦�����(��.��.����);��� " << endl;
    getline(cin, input);

    string _lastName = Parser(input, ';');
    string _firstName = Parser(input, ';');
    string _patronymic = Parser(input, ';');
    string _day = Parser(input, '.');
    string _month = Parser(input, '.');
    string _year = Parser(input, ';');
    string _gender = input;

    int day = stoi(_day);
    int month = stoi(_month);
    int year = stoi(_year);

    cout << "\n�������: " << _lastName << "\n���: " << _firstName << "\n����⢮: " << _patronymic << "\n��� ஦�����: "
         << _year << '.' << _month << '.' << _day << "\n���: " << _gender << endl;

    return 0;
}
