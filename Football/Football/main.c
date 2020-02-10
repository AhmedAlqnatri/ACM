//
//  main.c
//  Football
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char string[101],counter1 = 0,counter0 = 0;
    scanf("%s",string);
    for (int i = 0; i < strlen(string); i++) {
    //printf("%c\n",string[i]);
        if (string[i] == '1' && counter0 < 7){
            counter1++;
            counter0 = 0;
        }else if (string[i] == '0' && counter1 < 7){
            counter0++;
            counter1 = 0;
        }
    }
    if (counter1 >= 7 || counter0 >= 7){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
