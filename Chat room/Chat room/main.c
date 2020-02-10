//
//  main.c
//  Chat room
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int state = 0;
    char string[100];
    scanf("%s",string);
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'h' && state == 0){
            state = 1;
        }else if (string[i] == 'e' && state == 1){
            state = 2;
        }else if (string[i] == 'l' && state == 2){
            state = 3;
        }else if (string[i] == 'l' && state == 3){
            state = 4;
        }else if (string[i] == 'o' && state == 4){
            state = 5;
        }else{
            continue;
        }
    }
    if (state == 5){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
