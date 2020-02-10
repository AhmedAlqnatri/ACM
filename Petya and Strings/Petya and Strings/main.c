//
//  main.c
//  Petya and Strings
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string1[101],string2[101];
    scanf("%s",string1);
    scanf("%s",string2);
    for (int i = 0; i < strlen(string1); i++){
        string1[i] = tolower(string1[i]);
    }
    for (int i = 0; i < strlen(string2); i++){
        string2[i] = tolower(string2[i]);
    }
    if (strcmp(string1, string2) > 0){
        printf("1\n");
    }else if (strcmp(string1, string2) < 0){
        printf("-1\n");
    }else{
        printf("0\n");
    }
    return 0;
}
