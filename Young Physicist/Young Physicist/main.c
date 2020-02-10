//
//  main.c
//  Young Physicist
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int numberOfCordinates, x = 0, y = 0, z = 0;
    scanf("%d",&numberOfCordinates);
    int cordinates[numberOfCordinates][3];
    for (int i = 0; i < numberOfCordinates; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d",&cordinates[i][j]);
        }
    }
        for (int j = 0; j < numberOfCordinates; j++) {
            x += cordinates[j][0];
        }
    for (int j = 0; j < numberOfCordinates; j++) {
        y += cordinates[j][1];
    }
    for (int j = 0; j < numberOfCordinates; j++) {
        z += cordinates[j][2];
    }
    if (x == 0 && y == 0 && z==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
