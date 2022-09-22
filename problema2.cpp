#include <iostream>

using namespace std;

int main()
{   int w=1;
    int h=1;
    int m=0;
    int u=0;
    while (m<4000000){  
        if (m%2==0){
            u=u+m;
        }      
        m=w+h;
        w=h;
        h=m;
        
    }cout<<u;

    return 0;
}