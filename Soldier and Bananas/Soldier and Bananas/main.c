//
//  main.c
//  Soldier and Bananas
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int initialPrice, wealth, numberOfBanans, expeses = 0, sum = 0, output;
    scanf("%d %d %d",&initialPrice,&wealth,&numberOfBanans);
    for (int i = 0; i < numberOfBanans; i++) {
        expeses += initialPrice;
        sum += expeses;
    }
    output = sum - wealth;
    if (output <= 0){
        output = 0;
    }
    printf("%d\n",output);
    return 0;
}
