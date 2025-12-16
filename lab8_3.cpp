#include<iostream>
#include<string>

using namespace std;

int main(){
    string crew;
    int age;
    int height;
    int bountry;

    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100){
            crew = "Chopper";
        }
        else if (height < 180){
            crew = "Usopp";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bountry;
            if (bountry > 1.1e9){
                crew = "Zoro";
            }
            else{
                crew = "Sanji";
            }
        }
    }
    else if (age <= 60){
        cout << "Enter your bounty: ";
        cin >> bountry;
        if (bountry > 5e8){
            crew = "Jinbe";
        }
        else{
            crew = "Franky";
        }
    }
    else{
        crew = "Brook";
    }
    cout << "Your character = " << crew;
}