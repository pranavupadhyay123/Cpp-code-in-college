#include <iostream>
using namespace std;

void shapes(float length=0,float breadth=0,float radius=0,float heigth=0){
    float area;
    if (length==0 && breadth==0){
        area=3.14*radius*radius;
    }
    else if (breadth==0 && radius==0){
        area=0.5*length*heigth;
    }
    else if(breadth==0 && heigth==0&&radius==0){
        area=length*length;
    }
    else{
        area=length*breadth;
    }
    cout<<area;
}

int main()
{
    shapes(4,8);

    return 0;
}