//
//  main.c
//  Tram
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main (){
    int numberOfStops,currentStatus = 0, max = 0;
    scanf("%d",&numberOfStops);
    if (numberOfStops >= 2){
        int statusOfTram[numberOfStops][2];
        for (int i = 0; i < numberOfStops; i++) {
            for (int j = 0; j < 2; j++) {
                scanf("%d",&statusOfTram[i][j]);
            }
        }
        for (int i = 0; i < numberOfStops; i++) {
            currentStatus += (statusOfTram[i][1] - statusOfTram[i][0]);
            if (max < currentStatus){
                max = currentStatus;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
