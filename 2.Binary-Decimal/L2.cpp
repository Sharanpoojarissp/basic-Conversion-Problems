#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

 int bin_deci(int number){
    int digit , ans , i ;
    ans = 0;
    i = 0;
     while( number!=0){
        digit = number%10;
        if(digit == 1 ){
            ans = ans + digit * pow(2 , i);
        }
        number = number /10 ; 
        i++; 
     }
     return ans;
}
    

int main(){
    int num;
    cout<<"enter num: "<<endl;
    cin>>num;
    cout<<bin_deci(num);

    return 0;
}