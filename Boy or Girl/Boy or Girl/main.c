//
//  main.c
//  Boy or Girl
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char name[101];
    int counter = 0, length;
    scanf("%s",name);
    for (int i = 0; i < (int)strlen(name) ; i++) {
        for (int j = i+1; j < (int)strlen(name); j++) {
            if (name[i] == name[j]) {
                counter++;
                break;
            }
        }
    }
    
    length = ((int)strlen(name)) - counter;
    if (length%2 == 0) {
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }
    return 0;
}
