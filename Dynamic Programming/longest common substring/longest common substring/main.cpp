//
//  main.cpp
//  longest common substring
//
//  Created by akshat garg on 22/06/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <iostream>
using namespace std;

int Lcs(string s1, string s2, int m, int n){
    int L[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0) L[i][j]=0;
            else if(s1[i-1]==s2[j-1]){
                L[i][j] = 1+L[i-1][j-1];
            }
            else L[i][j]= max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}


int main() {
    string s1; cin>>s1;
    string s2; cin>>s2;
    int m = (int)s1.length(); int n = (int)s2.length();
    cout<<Lcs(s1,s2,m,n)<<endl;
    
    return 0;
}
