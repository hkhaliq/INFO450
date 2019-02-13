#include <iostream>

using namespace std;

int main()
{
    int response = 0;
    
    while (1)
    {
        bool isPrime = true;
        
        cout << "Enter a number and I will tell you if it is prime or not. Enter 0 to close" << endl;
        cin >> response;
        
        if (response == 0) {
            break;
        }
        
        else {
            for (int i = 2; i < response; i++) {
                if (response <= 3) {
                    isPrime = true;
                    break;
                }
                
                else if (response % i == 0) {
                    isPrime = false; 
                    break;
                }
                
                else{}
            }
            
            if (isPrime) {
                cout << "The number is Prime." << endl;
            }
            else { 
                cout << "The number is not Prime." << endl;
            }
        }
        
    }

    return 0;
}
