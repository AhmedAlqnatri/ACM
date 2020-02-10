//
//  main.c
//  Next Round
//
//  Created by Sheldon Alqnatri on 08/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int participantes, k, i, counter = 0;
    scanf("%d %d",&participantes,&k);
    int arrayOfScores[participantes+1];
    for (i = 0; i < participantes; i++){
        scanf("%d",&arrayOfScores[i]);
    }
    int scr=arrayOfScores[k-1];
    for(int i=0; i<participantes; i++){
        if(arrayOfScores[i] >= scr && arrayOfScores[i] != 0){
            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}

