//MAGADIA PYTHON Simple Customer Information
#include <iostream>

using namespace std;

int main()
{
    //variables
    string firstName;
    string lastName;
    string address;
    int age;
    int idNumber;
    int format;

    //questions
    cout << "Input your first name: ";
    getline(cin, firstName);

    cout << "Input your last name: ";
    getline(cin, lastName);

    cout << "Input your age: ";
    cin >> age;
    cin.ignore();

    cout << "Input your address: ";
    getline(cin, address);

    cout << "Input your ID Number: ";
    cin >> idNumber;
    cin.ignore();

    //formats
    cout << endl << "What do you want to display? Choose from the number below and type it in:" << endl;
    cout << "1. Full Name, ID number, Address, Age" << endl;
    cout << "2. Last name, First Name, Address, Age, ID Number" << endl;
    cout << "3. Last name, ID Number" << endl;
    cout << "4. First Name, Last Name, ID Number" << endl;
    cout << "Format number: ";
    cin >> format;

    //final outputs
    if (format == 1) {
        cout << endl << format << endl;
        cout << "Full name: " << firstName << " " << lastName << endl;
        cout << "ID number: " << idNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
    } else if (format == 2){
        cout << endl << format << endl;
        cout << "Last name: " << lastName << endl;
        cout << "First name: " << firstName << endl;
        cout << "Address: " << address << endl;
        cout << "ID number: " << idNumber << endl;
    } else if (format == 3) {
        cout << endl << format << endl;
        cout << "Last name: " << lastName << endl;
        cout << "ID number: " << idNumber << endl;
    } else if (format == 4) {
        cout << endl << format << endl;
        cout << "First name: " << firstName << endl;
        cout << "Last name: " << lastName << endl;
        cout << "ID number: " << idNumber << endl;
    }
return 0;
}
