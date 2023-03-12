//? NOTE -- eq --> 345 is converted as 5 + 4*8*1 + 3*8*8 = 229 
//! change the base value to 2 and its binary --> decimal convertor 
#include<iostream>
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

int main(){
        long long octal;
        cout<<"enter the octal number : "<<endl;
        cin>>octal;

        cout<<con(octal);
    return 0;
}




//!function method - inbuilt 
int main(){
       string octal;
        cout<<"enter the octal number : "<<endl;
        cin>>octal;
        int base = 8;
        cout<<stoi(octal , 0 , base);
    return 0;
}



//! this is real solution of the problem which is similar to the code of binary to decimal conversion 
// #include<iostream>
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;

//  int bin_deci(int number){
//     int digit , ans , i ;
//     ans = 0;
//     i = 0;
//      while( number!=0){
//         digit = number%10;
//         // if(digit == 1 ){
//             ans = ans + digit * pow(8 , i);
//         // }
//         number = number /10 ; 
//         i++; 
//      }

//      return ans;
// }
    

// int main(){
//     int num;
//     cout<<"enter num: "<<endl;
//     cin>>num;
//     cout<<bin_deci(num);

//     return 0;
// }

