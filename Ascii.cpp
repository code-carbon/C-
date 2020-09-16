#include <bits/stdc++.h>
using namespace std;
int main(){
int range;
cout << "Integer value"<<"    Ascii value"<< endl;
cout <<"\nEnter range: ";
cin >> range;
cout <<"\n";
for(int i=1;i<=range;i++)
    cout <<"    "<<i <<"\n\t\t    "<<char(i)<<endl;
}
