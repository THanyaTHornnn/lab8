/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,hi,bo;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> hi;
        if(hi < 100){
            name = "Chopper";
        }else if(hi<180){
            name = "Usopp";
        }else {
            cout << "Enter your bounty: ";
            cin >> bo;
            if(bo > 1100000000){
                name = "Zoro";
            }else{
                name = "Sanji";
            }
        }
    
    }else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> bo;
        if(bo > 500000000){
            name = "Jinbe";
        }else{
            name = "Franky";
        }
    }else{
        name = "Brook";
    }
    cout << "Your character = " << name;
}
