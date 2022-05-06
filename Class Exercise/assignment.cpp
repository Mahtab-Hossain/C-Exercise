#include <iostream>
using namespace std;

class Building{
    
private:

    int per_sqare_feet_cost,total_square_feet;
    
public:

    int tot_c;//outputs the total cost
    
    //value initilization of private variable
    Building(int p,int t){
        
        total_square_feet = t;
        per_sqare_feet_cost = p;
        cout<< total_square_feet<< endl;
        cout<< per_sqare_feet_cost<<endl;
    }
    
    //total building cost method
    int building_cost(){
        
        tot_c = per_sqare_feet_cost * total_square_feet;
        
        cout<<"total  cost : "<<tot_c<<endl;
        
        return building_cost();
    }
    
};
class Residence: public Building{
private:
    int cpee,nee;
public:
    double tot_c_e;//total electric cost of all electric equipment
    
    //value initilization of private variable
    Residence(int x, int y){
        
        nee = y; //number of electric equipment
        cpee = x; //cost per electric equipment
        
        cout<<"number of electric equipment"<<y<<endl;
        cout<<"Cost of per electric equipment"<<x<<endl;
        
    }
    //total cost of all electric equipment method
    int electric_cost(){
        
        tot_c_e = nee*cpee;
        cout<<"total cost of all electric equipment: "<<tot_c_e<<endl;
        return electric_cost();
    }
    
    
};
class Dormitory: public Residence{
protected: 
    int nor;//number of redidents
    
public:

    Dormitory(int n){
        nor = n;
        cout<<"number os Residence: "<<nor<<endl;
    }

};
int main(){
    
    Building b1(12,13);
    b1.building_cost();
    Residence r1(30,15);
    r1.electric_cost();
    Dormitory d1(5)
    
    return 0;
    
}