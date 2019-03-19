#include <iostream>
#include <cstdio>

using namespace std;
class Employee
{
    private:
        char first_name[128]; 
        char last_name[128];
        bool hourly_employee = false;
        double compensation = 0.0
    public: 
        void set_compensation ( double input_comp){
            compensation = input_comp;
        }
        void set_first_name(char* input_name){
        void set_last_name(char* input_name){
        void set_is_hourly(bool input_h)(hourly_employee * input_h;) 
        void printEntry( ){
            cout << last_name << ", ";
            cout << first_name << ": ";
            if (hourly_employee){
                cout << "$" << compensation * 2000.0 << endl;
            } else {
                cout << "$" << compensation << endl;
            }
        }
    }
};
int main()
{
 
    return 0;
}
