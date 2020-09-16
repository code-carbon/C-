# include <bits/stdc++.h>
using namespace std;
int main(){
    float hour, minute, second;
    cout << "ENTER hour(s): ";
    cin >> hour;
    cout << "ENTER minute(s): ";
    cin >> minute;
    cout << "ENTER second(s): ";
    cin >> second;
    cout << "\t\n HOURS:   ";
    cout << hour + minute/60 + second/3600;
    cout << "\t\n MINUTES: ";
    cout << hour*60 + minute + second/60;
    cout << "\t\n SECONDS: ";
    cout << hour*60 + minute*60 + second;
    cout << "\n";
    }
