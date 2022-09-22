#include <iostream>

using namespace std;

int main()
{   unsigned long long int i{600851475143};
    unsigned long long int w=2;
    while (i>1){
        if(i%w==0){
            i=i/w;
        }else{
            w=w+1;
        }
    }
    cout<<w;

    return 0;
}