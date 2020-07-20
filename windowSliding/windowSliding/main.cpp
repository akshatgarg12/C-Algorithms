//
//  main.cpp
//  windowSliding
//
//  Created by akshat garg on 13/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

//max sum of consecutive elemnet in an array, of size k.

#include <iostream>
#include <vector>
using namespace std;
void max_element(int arr[], int n, int k);
int main() {
    int n; cin>>n;
    int k; cin>>k;
    int A[n];
    int i;
    for(i=0;i<n;i++) cin>>A[i];
//    int sum=0, max_sum=0;
//    for(i=0;i<k;i++) sum+=A[i];
//    cout<<sum<<endl;
//    max_sum=sum;
//    for(i=k;i<n;i++){
//        sum+=A[i] - A[i-k];
//        max_sum=max(max_sum,sum);
//    }
//    cout<<max_sum<<endl;
    max_element(A, n, k);
    cout<<endl;
    return 0;
}


//find the max element in all the continuous window of size k in an array of size n.

void max_element(int arr[], int n, int k){
    if(k==1){
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        
        return;
    }
    int p,q,max_num,t=0;
    p=0; q=k-1; max_num= arr[q];
    while(q<=n-1){
        if(arr[p]>max_num) max_num=arr[p];
        p++;
        if(p==q && p<=n-1){
            cout<<max_num<<" ";
            p=++t;
            q++;
            if(q<n) max_num = arr[q];
        }
    }
}
