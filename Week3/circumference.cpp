#include <iostream>

using namespace std;

const double PI = 3.14159;

double calculateCircumference(double radius);

int main()
{
    double input = 0;
    double output = 0;
    
    while(1){
        cout << "What is the radius of the circle?" << endl;
        cout << "Enter 0 to quit" << endl;
        
        cin >> input;
        
        if (input == 0){
            break;
        }
        else{
            output = calculateCircumference(input);
            
            cout << "The circumference of the circle is " << output << endl;
        }
    }

    return 0;
}

double calculateCircumference(double radius) {
    double circumference = 2*PI*radius;
    return circumference;
}
