//
//  main.c
//  Domino piling
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int m,n,result;
    scanf("%d %d",&m,&n);
    if ( m%2 == 0 && n%2 == 0){
        result = (m/2) * n;
    }else if ( m%2 == 0 && n%2!= 0){
        result = ((n/2)*m) + (m/2);
    }else if (m%2 != 0 && n%2 == 0){
        result = ((m/2)*n) + (n/2);
    }else{
        result = ((m/2) * n) + (n/2);
    }
    printf("%d\n",result);
    return 0;
}
