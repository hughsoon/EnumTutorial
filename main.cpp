#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your full name: ";
    string name;
    getline(cin, name);

    cout << "Enter your age: ";
    int age;
    cin >> age;

    float numberOfLetters = name.length();
    float theEquation = age / numberOfLetters;

    cout << "You've lived " << theEquation << " years for each letter in your name.";
    return 0;
}
