//
//  main.cpp
//  CountingSort
//
//  Created by akshat garg on 07/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n];
    int i;
    for(i=0;i<n;i++) cin>>A[i];
    int k=0;
    for(i=0;i<n;i++){
        k= max(k,A[i]);
    }
    int aux[k+1];
    for(i=1;i<=k;i++)aux[i]=0;
    for(i=0;i<n;i++) aux[A[i]]++;
    int sortedArr[n];
    int j=0;
    for(i=1;i<=k;i++){
        int temp =aux[i];
        while(temp--){
            sortedArr[j++]=i;
        }
    }
    for(i=0;i<n;i++){
        cout<<sortedArr[i]<<" ";
    }
    
    return 0;
}
