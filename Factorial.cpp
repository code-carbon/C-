#include <bits/stdc++.h>
//REMEMBER THAT FILTER IS FACTOR OF THE INPUT
using namespace std;
int main(){
    int input, filter;
    cout << "\n Enter the number to find its factorials: ";
    cin >> input;
    cout << "\n";
    for (filter=1;filter<=input;filter++){
            if(input%filter==0){
                cout<<" [ "<<filter<<" ] ";
        }

        }
        cout << "\n";
    }
