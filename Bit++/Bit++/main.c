//
//  main.c
//  Bit++
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int rows,i ,j, counter = 0;
    scanf("%d",&rows);
    char input[rows][3];
    for (i = 0; i < rows; i++) {
        scanf("%s",input[i]);
    }
    for (j = 0; j < rows; j++) {
        for (i = 0; i < 3; i++) {
            if (input[j][i] == '+'){
                counter++;
                break;
            }else if (input[j][i] == '-'){
                counter--;
                break;
            }else{
                continue;
            }
        }
    }
    printf("%d\n",counter);
    return 0;
}
