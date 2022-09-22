#include <iostream>

using namespace std;

int main()
{   int h{100};
    int x=0;
    int z=0;
    while(h>0){
        x=x+(h*h);
        z=z + h;
        h=h-1;
    }
    z=z*z;
    cout<<z-x;
    return 0;
}