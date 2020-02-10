//
//  main.c
//  Lucky Division
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int input, status = 1;
    scanf("%d",&input);
    int luckyNumbers[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for (int i = 0; i < 14; i++) {
        status = input % luckyNumbers[i];
        if ( status == 0){
            printf("YES\n");
            break;
        }
    }if (status != 0){
        printf("NO\n");
        
    }
    return 0;
}
