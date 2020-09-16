#include <bits/stdc++.h>
using namespace std;
int main(){
    string shape, type;
    cout << "Enter the shape: ";
    cin >> shape;
    cout << "Enter the type: ";
    cin >> type;
    if (shape=="triangle"){
        if(type=="area"){
            float half;
            int  base,height;
            cout << "Enter the length of base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            half = 1/2.0;
            cout << "Result : " << half*base*height;
            cout << "\n";
        }
        if(type=="perimeter"){
            float side1,side2,side3;
            cout << "Side 1: ";
            cin >> side1;
            cout << "Side 2: ";
            cin >> side2;
            cout << "Side 3: ";
            cin >> side3;
            cout << "Result : " << side1+side2+side3;
            cout << "\n";
        }
    }
        if (shape=="square"){
        if(type== "perimeter"){
            float side;
            cout << "Enter a side: ";
            cin >> side;
            cout << "Result: "<< 4.0*side;
            cout << "\n ";
        }
    }
}

