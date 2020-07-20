//
//  main.cpp
//  QuickSort
//
//  Created by akshat garg on 07/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//


#include <iostream>

using namespace std;

int partitionIndex(int A[], int start, int end){
    int pivot = A[end];
    int partindex = start;
    if(end-start<1) return 0;


    for(int i=start;i<=end;i++){
        if(A[i]<pivot){
            swap(A[i],A[partindex]);
            partindex=partindex+1;
        }
    }
    swap(A[partindex], A[end]);
    return partindex;
}

void QuickSort(int A[], int start, int end){
    if(start<end){
        int partiton = partitionIndex(A,start,end);
        QuickSort(A,start, partiton-1);
        QuickSort(A,partiton+1,end);
    }
    else return;
}


int main() {
//    int num;
//    cin>>num;
//    int A[num];
//    for(int i=0;i<num;i++) cin>>A[i];
    int A[]={1,3,4,2,21};
    int  n= sizeof(A)/sizeof(A[0]);
    int start = 0;
//    int end = 4;
    
    QuickSort(A, start, n-1);
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
    return 0;
}

