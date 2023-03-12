#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int con(long long number ){
int i=0 , dec=0 ;
int base = 8;
    while(number!=0 ){
        int digit = number % 10;         
        dec += digit * pow(base,i);  
        number = number / 10;               
        i++;
    }
    return dec;
}

int deci_binary(int number ){
    int i = 0;
    int ans = 0;
    while(number !=0 ){
        int digit = number & 1 ;
        ans = ans + (digit*pow(10,i)); 
        number = number >> 1;
        i++;
    }
    return ans;
}

int main(){
        long long octal;
        cout<<"enter the octal number : "<<endl;
        cin>>octal;
        cout<<con(octal)<<endl;
        // cout<<deci_to_bin(octal)<<endl;
        int ans = con(octal);
        cout<<deci_binary(ans);
    return 0;
}

// 11100101 

// 300 -- > 11000000

// 320 --> 11010000