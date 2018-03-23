#include <iostream>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
    public:
        void set_value(string a, int b) {
            name = a;
            age = b;
        }
};

class Zebra : public Animal {
    public:
        void display() {
            cout << "My name is " << name << " and I am " << age << 
            " years old from WoW\n";
        }
};

class Dolphin : public Animal {
    public:
        void display() {
            cout << "My name is " << name << " and I am " << age <<
            " years old from LoL\n";
        }
};

int main() {
    Dolphin Jim;
    Zebra Dad;
    Dad.set_value("Dad", 55);
    Jim.set_value("Jim", 15);
    Dad.display();
    Jim.display();
    return 0;
}