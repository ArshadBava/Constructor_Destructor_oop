#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(){
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter age: " << endl;
        cin >> age;
        cout << "Default constructor called" << endl;
    }

    person(string name, int age){
        this->name = name;
        this->age = age;
        cout << "Parameterized constructor called" << endl;
    }

    void introduce(){
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }

    ~person(){
        cout << "Destructor has been called" << endl;
    }
};

int main(){
    person per1;
    person per2("Alex", 25);

    per1.introduce();
    per2.introduce();

    return 0;
}
