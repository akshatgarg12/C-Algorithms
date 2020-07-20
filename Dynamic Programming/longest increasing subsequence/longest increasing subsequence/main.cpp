//
//  main.cpp
//  longest increasing subsequence
//
//  Created by akshat garg on 22/06/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
using namespace std;
int lis(int arr[],int n){
    int answer[n];
    answer[0]=1;
    int i,j;
    for(i=1;i<n;i++){
        answer[i]=1;
        for(j=0;j<i;j++){
            if(arr[i]>arr[j]){
                answer[i] = max(answer[i],answer[j]+1);
            }
        }
    }
    int ans=0;
    for(i=0;i<n;i++){
        ans=max(ans,answer[i]);
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = lis(arr, n);
    cout<<ans<<endl;
    return 0;
}
