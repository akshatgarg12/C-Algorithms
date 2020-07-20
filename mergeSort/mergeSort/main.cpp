//
//  main.cpp
//  mergeSort
//
//  Created by akshat garg on 06/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
using namespace std;
void MergeSort(int L[],int leftCount,int R[],int rightCount, int A[]){
    int i=0,j=0,k=0;
    while(i<leftCount && j<rightCount){
        if(L[i]<R[j]) A[k++]=L[i++];
        else A[k++]=R[j++];
    }
    while(i<leftCount) A[k++]=L[i++];
    while(j<rightCount) A[k++] = R[j++];
}

void Merge(int length, int A[])
{
    if(length<2) return;
    int leftCount=length/2;
    int rightCount=length-leftCount;
    int L[leftCount], R[rightCount];
    int i;
    for(i=0;i<leftCount;i++) L[i]=A[i];
    for(i=leftCount;i<length;i++) R[i-leftCount]=A[i];
    Merge(leftCount,L);
    Merge(rightCount,R);
    MergeSort(L,leftCount,R,rightCount,A);
}


int main()
{
    int arr[6] = {5,4,1,9,3,2};
    Merge(6, arr);
    for(int i=0;i<6;i++) cout<<arr[i]<<" ";
    return 0;
}
