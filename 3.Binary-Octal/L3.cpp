#include<iostream>
#include<math.h>
using namespace std;

int convert(long long bn){
    int digit , on =0 , dn = 0 , i = 0 ;
    
     while( bn!=0){
        digit = bn%10;
        if(digit == 1 ){
            dn = dn + digit * pow(2 , i);
        }
        bn = bn /10 ; 
        i++; 
     }
     i = 1;
    while(dn!=0){
    on = on + (dn%8)*i;
    dn = dn / 8;
    i = i*10;
    }
    return on;
}

int main(){
    long long a = 10010110;
    cout<<convert(a);

    return 0;
}
