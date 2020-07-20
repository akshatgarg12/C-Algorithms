//
//  main.cpp
//  bubble sort
//
//  Created by akshat garg on 10/04/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
using namespace std;
 
void bubbleSort(int A[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                int temp =A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    int A[n];
    int i;
    for(i=0;i<n;i++) cin>>A[i];
    bubbleSort(A, n);
    for(i=0;i<n;i++) cout<<A[i]<<" ";
    
    std::cout << "Hello, World!\n";
    return 0;
}
