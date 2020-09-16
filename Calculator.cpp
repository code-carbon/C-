#include <bits/stdc++.h>
using namespace std;
int main(){
int operation;
float num1, num2;
cout << "                   CALCY CALCULO";
cout << "\n \n1 : Add\n2 : Subtract\n3 : Multiply\n4 : Divide\n5 : Square root\n6 : Cube root\nEnter your operation:";
cin >> operation;
if (operation>6){
    cout<<"BYE!!";
}
else{switch(operation)
{
    case 1: cout << "\n First num: ";
            cin >> num1;
            cout << "\n Second num: ";
            cin >> num2;
            cout << "\n Results: " << num1+num2 <<"\n";
            break;
    case 2: cout << "\n First num: ";
            cin >> num1;
            cout << "\n Second num: ";
            cin >> num2;
            cout << "\n Results: " << num1-num2 <<"\n";
            break;
    case 3: cout << "\n First num: ";
            cin >> num1;
            cout << "\n Second num: ";
            cin >> num2;
            cout << "\n Results: " << num1*num2 <<"\n";
            break;
    case 4: cout << "\n First num: ";
            cin >> num1;
            cout << "\n Second num: ";
            cin >> num2;
            cout << "\n Results: " << num1/num2 <<"\n";
            break;
    case 5: cout << "\n Number: ";
            cin >> num1;
            cout << "\n Results: " << sqrt(num1) <<"\n";
            break;
    case 6:cout << "\n Enter number: ";
           cin >> num1;
           for (num2=1;num2<num1;num2++){
           if(num2*num2*num2==num1){
                cout<<" \n Results: "<<num2;
                cout << "\n";
            }}


}}

}
