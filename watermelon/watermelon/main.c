//
//  main.c
//  watermelon
//
//  Created by Sheldon Alqnatri on 08/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    if (input>= 1 && input <= 100){
        if ((input%2) == 0 && input != 2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }else{
        return 0;
    }
    
    return 0;
}
