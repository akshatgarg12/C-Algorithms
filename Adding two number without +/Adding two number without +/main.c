//
//  main.c
//  Adding two number without +
//
//  Created by akshat garg on 27/05/20.
//  Copyright © 2020 akshat garg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n1, n2; scanf("%d %d",&n1,&n2);
    int carry = n1 & n2;
    int add = n1 ^ n2;
    while(carry){
        carry=carry<<1;
        int sum  = add ^ carry;
        carry = add & carry;
        add = sum;
    }
    printf("%d",add);
    return 0;
}
