#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int a,h,b;
    string c;

    cout << "Enter your age: ";
    cin >> a;
    if(a<=25){
        cout << "Enter your height: ";
        cin >> h;
        if(h<100){
            c = "Chopper";
        }else if(h<180){
            c = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> b;
            c = "Sanji";
            if(b>1100000000){
               c = "Zoro";
            }
        }
    }else{
        c = "Brook";
        if(a<=60){
            cout << "Enter your bounty: ";
            cin >> b;
            c = "Franky";
            if(b>500000000){
                c = "Jinbe";
            }
        }
    }
cout << "Your character = " << c;
return 0;
}