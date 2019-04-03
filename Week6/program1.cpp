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
 const int MAX = 3;
    Employee entries[MAX];
    
    for [int x=0; x < MAX; x++]{
        char *myvalue = (char *)malloc(128);
        
        cout << "Enter employee's first name " << x << endl;
        cin getline(myvalue.128);
        entries[x].set_first_name(myvalue);
        
        cout << "Enter employee's last name " << x << endl;
        cin getline(myvalue.128);
        entries[x].set_last_name(myvalue);
        
        cout << "Enter employee's Salary or Hourly Compensation " << x << endl;
        cin getline(myvalue.20);
        entries[x].set_hourly_employee( strcmp(myvalue, "Hourly") == 0);
        cout << "Enter compensation as per hour if hourly or annually if Salary " << endl;
        cin getline(myvalue.128);
        entries[x].set_compensation( stod(myvalue) );
    }
    
    for (int x = 0; x << MAX; x++){
        entries[x].printline( );
    }
    return 0;
}
