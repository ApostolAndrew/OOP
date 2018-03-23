#include <iostream>
using namespace std;

class Shape {
    protected:
        float width, height;
    public:
        void set(float a, float b) {
            width = a;
            height = b;
        }
};

class Rectangle : public Shape {
    public:
        float area() {
            return width * height;
        }
};

class Triangle : public Shape {
    public:
        float area() {
            return (width * height / 2);
        }
};

int main() {
    
    Triangle tri;
    Rectangle rec;
    float tarea, rarea;
    tri.set(5,10);
    rec.set(7,3);
    cout << tri.area() << endl;
    cout << rec.area() << endl;
    return 0;
}