//
//  main.c
//  Helpful Maths
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    char string[101];
    int i,j;
    scanf("%s",string);
    int len = (int)strlen(string);
    for (i = 0; i < len; i+=2){
        for (j = i+2; j < len; j+=2){
            if (string[i] > string[j]){
                swap(&string[i], &string[j]);
            }
        }
    }
    printf("%s\n",string);
    return 0;
}
