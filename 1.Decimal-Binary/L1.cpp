#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int deci_to_bin(int number){ 
   int bit  , ans , i ;
   i = 0;
   ans = 0;
 
    while (number != 0){
        bit = number & 1 ;
        ans = ans + (bit*pow( 10 , i));
        number = number >> 1;
        i++;
    }
    return ans;
}

int main(){
    int a = 500;
    cout<<deci_to_bin(a);
    return 0;
}