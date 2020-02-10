//
//  main.c
//  Way Too Long Words
//
//  Created by Sheldon Alqnatri on 08/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int i,numberOfInputs;
    unsigned long len_2;
    char string[101][101];
    scanf("%d",&numberOfInputs);
    for ( i = 0; i < numberOfInputs; i++){
        scanf("%s",string[i]);
    }
    for (i = 0; i < numberOfInputs; i++){
        if (strlen(string[i]) <= 10){
            printf("%s\n",string[i]);
        }else{
            len_2 = strlen(string[i]) - 2;
            printf("%c%d%c\n",string[i][0],(int)len_2,string[i][len_2 + 1]);
        }
    }
    return 0;
}
