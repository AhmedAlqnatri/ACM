//
//  main.c
//  Twins
//
//  Created by Sheldon Alqnatri on 11/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    int numberOfCoins,max = 0, value, count = 0, total = 0, money = 0,counter = 0;
    scanf("%d",&numberOfCoins);
    int collectionOfcoins[numberOfCoins], sorted[numberOfCoins];
    for (int i = 0; i < numberOfCoins; i++) {
        scanf("%d",&collectionOfcoins[i]);
        if (max < collectionOfcoins[i]){
            max = collectionOfcoins[i];
        }
    }
    
    //Counting sort
    int size = max + 1;
    int array[size];
    memset(array, 0, size*sizeof(array[0]));
    for (int i = 0; i < numberOfCoins; i++) {
        value = collectionOfcoins[i];
        total += value;
        array[value]++;
        
    }
    
    for (int j = 1; j <= max ; j++) {
        for (int i = count; i < numberOfCoins; i++){
            if (array[j] > 0){
                sorted[i] = j;
                array[j]--;
                count++;
            }else{
                break;
            }
        }
    }
    
    for (int i = numberOfCoins - 1; i >= 0; i--) {
        if (total >= money) {
            money += sorted[i];
            total -= sorted[i];
            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}
