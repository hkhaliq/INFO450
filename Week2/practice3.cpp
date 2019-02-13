#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    
    while (1) {
        cout << "Enter a year and I will tell you if it is a leap year." << endl;
        cout << "Enter 0 to quit." << endl;
        cin >> year;
        
        if (year == 0){
            break;
        }
        
        else if (year % 4 == 0){
            if (year % 100 == 0){
                if (year % 400 == 0){
                    cout << year << " is not a leap year." << endl;
                }
                
                else{ 
                    cout << year << " is not a leap year." << endl;
                }
            }
            
            else{
                cout << year << " is a leap year." << endl;
            }
        }
        
        else{
            cout << year << " is not a leap year." << endl;
        }
    }
    return 0;
}
