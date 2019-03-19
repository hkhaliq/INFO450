
#include <iostream>
#include <stdio.h>

using namespace std;

const int Max_Students = 30;
const int Max_Size = 128;

int main()
{
    int x = 0;
    int count = 0;
    char students[Max_Students][Max_Size];
    for (x = 0; x < Max_Students;x++){
        strcpy(students[x], "");
    }
    for(x = 0;x < Max_Students;x++){
        cout << "Please enter student name " << x << " :";
        cin.getline(students[x], Max_Size);
        if (!strcmp("\0", students[x])){
            cout << "Got a 0, breaking." << endl;
            break;
        }
        count++ ;
    }
    for(x = 0;x < count;x++){
        cout << "students[" << x << "] = " << students[x] << endl;
    }
    

    return 0;
}
