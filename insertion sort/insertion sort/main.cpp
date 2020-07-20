//
//  main.cpp
//  insertion sort
//
//  Created by akshat garg on 10/04/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
using namespace std;

void insertionSort(int A[],int n){
    int key,i,j;
    for(i=1;i<n;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
}

int main(int argc, const char * argv[]) {
    int n,i;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++) cin>>A[i];
    insertionSort(A, n);
    for(i=0;i<n;i++) cout<< A[i]<<" ";
    cout<<"\n";
    return 0;
}
