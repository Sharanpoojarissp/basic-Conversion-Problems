//! code1 --> program 
#include<iostream>
#include<math.h>
using namespace std;

int convert(string num){
    int len = num.size();
    int dec = 0, index = 0;
   
    for(int i = len - 1; i >= 0; i--){
        if (num[i] >= '0' && num[i] <= '9') { 
            int digit = int(num[i]) - 48; 
            dec += digit * pow(16, index); 
            index++; 
        } 
        else if (num[i] >= 'A' && num[i] <= 'F') { 
            int digit = int(num[i]) - 55; 
            dec += digit * pow(16, index); 
            index++; 
        } 
    } 
    return dec; 
} 

int main() 
{ 
    string num = "1A"; 
    // cout<<"enter the hex : "<<endl;
    // cin >> num;
 
    cout << (convert(num));
 
    return 0;
}


//! inbuilt function of c++ : 
// #include<iostream>
// using namespace std;
// int main()
// {
//     string hexNumber;
//     cin >> hexNumber;
    
//     int base = 16;
//     // format stoi(hexaDecimal_in_string_format, 0, base_value)
//     cout << stoi(hexNumber, 0, base);
 
//     return 0;
// }