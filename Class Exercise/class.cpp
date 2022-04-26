#include<iostream>
using namespace std;

class student{
public:
    string name;
    string ID;
    string semester;
    string department;
    string email;
};

int main(){

    student s1;
    s1.name= "Tabassum";
    s1.ID= "20-43094-1";
    s1.semester="Spring";
    s1.department= "CSE";
    s1.email= "tabassum@aiub.edu";

    cout << s1.name << endl;
    cout << s1.email << endl;

    student s2;
    s2.name= "Digonto";
    s2.ID="21-45695-3";
    s2.semester="Spring";
    s2.department= "CSE";
    s2.email= "digonto@aiub.edu";

    cout << s2.semester << endl;
    cout << s2.ID << endl;
    return 0;
}
