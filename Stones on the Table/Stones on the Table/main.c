//
//  main.c
//  Stones on the Table
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int numberOfStones, counter = 0;
    scanf("%d",&numberOfStones);
    char Stones [numberOfStones];
    scanf("%s",Stones);
   // while (i < numberOfStones - 1) {
    for (int i = 0; i < numberOfStones; i++) {
        for (int j = i+1; j < numberOfStones; j++) {
            if (Stones [i] == Stones[j] && Stones[i] != 'W') {
                counter++;
                Stones[j] = 'W';
            }else{
                break;
            }
        }//i++;
    }
    printf("%d\n",counter);
    return 0;
}
