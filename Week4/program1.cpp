#include <iostream>
#include <cmath>

using namespace std;

int calculate(int numbers[10]);

int main()
{
    int array[10];
    
    cout << "Enter in 10  whole numbers" << endl;
    
    for(int i = 0; i < 10; i++){
        cin >> array[i];
    }
    
    calculate(array);
    
    
    return 0;
}

int calculate(int numbers[10]){
    double sum = 0;
    double sum2 = 0;
    
    for (int i = 0; i < 10; i++){
        sum += numbers[i];
    }
    
    sum = sum / 10;
    
    cout << "The mean is: " << sum << endl;
    
    for (int i = 0; i < 10; i++){
        sum2 += (numbers[i] - sum) * (numbers[i] - sum);
    }
    
    sum2 = sum2 / 10;
    
    cout << "The variance is: " << sum2 << endl;
    
    cout << "The standard deviation is: " << sqrt(sum2) << endl; 
    
}

