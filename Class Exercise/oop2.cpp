#include<iostream>
using namespace std;

class Box{
private:
    double length;
    double width;
    double height;
public:
    void setValues(double l, double w, double h){
        length=l;
        width= w;
        height=h;
    }
    double getLength(){
        return length;
    }
    double getWidth(){
        return width;
    }
};
int main(){
    Box B1;
    B1.setValues(5.25, 2.55, 4.66);
    cout << "Length: " << B1.getLength() << endl;
    cout << "Width: " << B1.getWidth() << endl;
    return 0;
}
