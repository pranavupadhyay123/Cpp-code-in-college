#include <iostream>
using namespace std;

class overload{
    public:
    void display(string name,string whether){
        cout<<"xcoord =56.34325"<<endl<<"ycoord =20.11122"<<endl;
        cout<<name<<endl;
        cout<<whether;
    }
    void display(){
        cout<<"xcoord =2"<<endl<<"ycoord =2"<<endl;
    }
};

int main()
{
    overload p;
    p.display();
    p.display("nirjuli","sunny");

    return 0;
}