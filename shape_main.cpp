#include <iostream>
#include "triangle.hpp"
#include "rectangle.hpp"

using namespace std;

int main() {
    
    int choice, width, base, height;

    cout << "1 for Triangle and 2 for Rectangle?" << endl;
    cin >> choice;

    if(choice == 1){
        // triangle calculation
        cout << "Enter base: ";
        cin >> base;
        if (!base || base <= 0) {
            cout << "Invalid input" << endl;
            return 1;
        }

        cout << "Enter height: ";
        cin >> height;
        if (!height || height <= 0) {
            cout << "Invalid input" << endl;
            return 1;
        }

        Triangle tri;
        tri.set_base(base);
        tri.set_height(height);

        cout << "Triangle area: " << tri.area() << endl;
    } 
    else if (choice == 2) {
        // rectangle calculation
        cout << "Enter width: ";
        cin >> width;
        if (!width || width <= 0) {
            cout << "Invalid input" << endl;
            return 1;
        }

        cout << "Enter height: ";
        cin >> height;

        if (!height || height <= 0) {
            cout << "Invalid input" << endl;
            return 1;
        }

        Rectangle rect;
        rect.set_width(width);
        rect.set_height(height);

        cout << "Rectangle area: " << rect.area() << endl;
    }
    else {
        cout << "Choice should be 1 or 2";
    }

    return 0;
}