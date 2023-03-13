#include <iostream>
using namespace std;

void shapes(float length=0,float breadth=0,float radius=0,float heigth=0){
    float area;
    if (length==0 && breadth==0){
        area=3.14*radius*radius;
        cout<<"area of circle"<<endl;
    }
    else if (breadth==0 && radius==0){
        area=0.5*length*heigth;
        cout<<"area of triangle"<<endl;
    }
    else if(breadth==0 && heigth==0&&radius==0){
        area=length*length;
        cout<<"area of square"<<endl;
    }
    else{
        area=length*breadth;
        cout<<"area of rectangle"<<endl;
    }
    cout<<area;
}

int main()
{
    cout<<"please enter the dimentions to find the area"<<endl;
    cout<<"please enter data in length,breadth,radius,heigth manner and if not apply please replace it with 0"<<endl;
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    shapes(a,b,c,d);

    return 0;
}
