#include<iostream>
using namespace std;

int main(){
    
    int long long x=0;
    int z=0;
    for (int u=101; u<1000; u++){
        for (int v=101; v <1000; v++){
            int resto=0;
            int numInv=0;
            int num=0;
            x = u*v;
            num=x;
            while(num>0){
                resto=num%10;
                num=num/10;
                numInv=numInv*10+resto;  
            }if (numInv==x){
                if(z>x){
                    z=z; 
            } else{
                z=x;
            }   
           }
        }
    }
    cout<<"el palindromo mas grande: "<<z;
    return 0;
}