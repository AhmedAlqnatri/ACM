//
//  main.c
//  Beatiful Matrix
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int matrix [6][6], x = 0, y = 0, result;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                x = i + 1;
                y = j + 1;
            }else{
                continue;
            }
        }
    }
    result = abs(x - 3) + abs(y - 3);
    printf("%d\n",result);
    
    return 0;
}
