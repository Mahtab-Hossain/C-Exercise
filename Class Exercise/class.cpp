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

    student s1,s2;
    
    s1.name;
    s1.ID;
    s1.semester;
    s1.department;
    s1.email;
    
    cout<<"Enter your Name,Id,semester,department and email"<<endl;
    cin>>s1.name>>s1.ID>>s1.semester>>s1.department>>s1.email;
    
    s2.name;
    s2.ID;
    s2.semester;
    s2.department;
    s2.email;
    
    cin>>s2.name>>s2.ID>>s2.semester>>s2.department>>s2.email;
    cout<< "Name\tID\tSemester\tDeapartment\tMail "<<endl;
    cout << s1.name <<"\t"<<s1.ID<<"\t"<<s1.semester<<"\t"<< s1.department <<"\t"<<s1.email<< endl;
    cout << s2.name <<"\t"<<s2.ID<<"\t"<<s2.semester<<"\t"<< s2.department <<"\t"<<s2.email<< endl;
    return 0;
}
