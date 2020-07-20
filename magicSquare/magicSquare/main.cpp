//
//  main.cpp
//  magicSquare
//
//  Created by akshat garg on 08/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//








/* A magic square is a square with the sum of all the coloumn, row, diagnols equal,
 certain rules:
 1.the first element i.e is 1 is found at the (n/2,n-1)posi. and then then further elements are founded by i--, j++.
 2. if i =-1 && j=n => i=0, j=n-2;
 3. take the matrix as a circular cynlinder. if index=-1, it becomes n-1, if index=n it becomes 0.
 4. if a number already exists at the finding index: i++, j=j-2.
 */
#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int A[n][n];
    memset(A, 0, sizeof(A));
    int i, j;
    i=n/2; j=n-1;
    int num;
    for(num=1;num<=n*n;){
        if(i==-1 && j==n){
            i=0; j=n-2;
        }
        else if(i==-1) i=n-1;
        else if(j==n) j=0;
        
        if(A[i][j]!=0){
            i++; j=j-2;
        }
        else {
            A[i][j]=num;
            num++;
            i--;j++;
        }
    }
    cout<<endl;
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
