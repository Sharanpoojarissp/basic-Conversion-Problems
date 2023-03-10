//This convertor of any form to base x ! from 0-9 

#include<iostream>
#include<math.h>
using namespace std;

int convertor( int number ){
    int digit , ans=0 , i=0 ; 
    int base = 8;

    while(number != 0){
        digit = number%10;
        ans = ans + digit*pow(base , i );
        number = number / 10; 
        i++;
    }

    return ans;
}

int main(){
    int num;
    cout<<"enter the binary/octal number : "<<endl;
    cin>>num; 

    cout <<convertor(num);

    return 0;
}


