#include <iostream>
using namespace std;

class Mother {
    public:
        void display() {
            cout << "Hello Sir" << endl;
        }
};

class Daughter : public Mother {
    public: 
        void display() {
            cout << "Hi mom" << endl;
        }
};

int main() {
    Daughter Jane;
    Jane.display();
    return 0;
}