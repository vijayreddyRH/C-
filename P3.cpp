#include <iostream>
#include <string>
Using namespace std;
 
class Student {
public:  
    int rollNo;  
    char stdName[];  
    float perc;  
};

int main()
{
        Student std;    // object creation
    // Accessing attributes and setting the values
    std.rollNo = 132;
    std.stdName = "Subhakar M";
    std.perc = 98.20f;

    // Printing the values
    cout << "Student's Roll No.: " << std.rollNo << "\n";
    cout << "Student's Name: " << std.stdName << "\n";
    cout << "Student's Percentage: " << std.perc << "\n";
    return 0;
}

