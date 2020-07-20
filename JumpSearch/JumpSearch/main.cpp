//
//  main.cpp
//  JumpSearch
//
//  Created by akshat garg on 08/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//


/* searching by jumping a fixed size, m
when an element is found less than the one to find and the next element greater than the one to find. we iterate in that interval */
/// array must be sorted.


#include <iostream>
#include <math.h>
using namespace std;
int main() {
    // insert code here...
    int n; cin>>n;
    int i;
    int A[n];
    for( i=0;i<n;i++) cin>>A[i];
    int num; cin>>num;
    int m=sqrt(n);
  
    int k=0;
    int index1=0, index2=n-1;
    while((k+1)*m<n){
        if(A[k*m]<=num && A[(k+1)*m]>=num){
            index1=k*m;
            index2=(k+1)*m;
            break;
        }
        else k++;
    }
    cout<<index1<<" "<<index2<<endl;
    for(i=index1;i<=index2;i++){
        if(A[i]==num){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
