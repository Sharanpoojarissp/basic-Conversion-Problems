#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void decimal_Hexadecimal( int number ){ 

    // initialize a char array to store the data : 
    char arr[100];

    int i =0;
    int remainder = 0;
    while(number != 0) {
        remainder = number % 16 ; 
        
        if(remainder < 10 ){
            arr[i] = remainder + 48;
            i++;
        }

        else{
            arr[i] = remainder + 55 ;
            i++;
        }

        number = number/16;
    }

    //! most important part is this : since there is count (i) number of data in char : 
       for (int j = i - 1; j >= 0; j--) {
        cout << arr[j];
    }
    
}

int main(){
    int number = 892;
    decimal_Hexadecimal(number) ;
    return 0;
}