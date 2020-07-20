//
//  main.cpp
//  BigInteger Factorial
//
//  Created by akshat garg on 08/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//
/// big integer is a datatype which cant be stored in an long long int. we have to use array to store different numbers for a big factorial.





#include <iostream>
using namespace std;

int calc(int x, int result[], int result_size);

void factorial(int n){
    int result_size=1;
    int result[500];
    result[0]=1;
    int x;
    for(x=2;x<=n;x++){
        result_size =calc(x,result,result_size);
    }
    
    
    for(int i=result_size-1;i>=0;i--){
        cout<<result[i];
    }
    cout<<endl;
    cout<<result_size;
}
int calc(int x, int result[], int result_size){
    int carry=0,i;
    for(i=0;i<result_size;i++){
        int prod = x*result[i]+carry;
        carry=prod/10;
        result[i]=prod%10;
    }
    while(carry){
//        int temp = carry%10;
        result[result_size]=carry%10;
        carry=carry/10;
        result_size++;
    }
    
    return result_size;
}
int main() {
    factorial(100);
    cout<<endl;
    return 0;
}
