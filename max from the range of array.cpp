#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   
    int a[]={10,20,35,3,345,3,634,6,54,6,45,7,56,3,5};
    cout<<*max_element(a,a+7);
    return 0;
}