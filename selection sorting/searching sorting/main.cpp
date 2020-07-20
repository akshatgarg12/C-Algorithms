//
//  main.cpp
//  searching sorting
//
//  Created by akshat garg on 10/04/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//
#include <iostream>
using namespace std;

void searchingSorting(int A[],int n){
    int min,min1=0;
    int i,j;
    for(i=0;i<n-1;i++){
        min= A[i];
        min1=0;
        for(j=i+1;j<n;j++){
            if(A[j]<min) {
                min= A[j];
                min1=j;
            }
        }
        if(min1!=0){
        A[min1]=A[i];
        A[i]= min;
        }
        else A[i]=min;
    }
}


int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++) cin>>arr[i];
    searchingSorting(arr,n);
    for(i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
