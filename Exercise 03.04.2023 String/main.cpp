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
    cout << "Введите: Фамилия;Имя;Отчество;Дата рождения(ДД.ММ.ГГГГ);пол " << endl;
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

    cout << "\nФамилия: " << _lastName << "\nИмя: " << _firstName << "\nОтчество: " << _patronymic << "\nДата рождения: "
         << _year << '.' << _month << '.' << _day << "\nПол: " << _gender << endl;

    return 0;
}
