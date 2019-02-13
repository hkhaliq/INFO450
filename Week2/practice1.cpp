#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int input = 0;
    
    while(1){
        
      cout << "Enter a positive integer and I will tell you its square" << endl;
      
      cout << "Enter 0 to quit" << endl;
      
        cin >> input;
        
        if (input == 0){
            break;
            
        }
        else {
            cout << input << " becomes " << input * input << " when squared." << endl;
        }
    }
  

    return 0;
}
