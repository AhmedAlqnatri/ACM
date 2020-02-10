//
//  main.c
//  Taxi
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int numberOfGroups,numberOfFour = 0,numberOfThree = 0,numberOfTwo = 0,numberOfOne = 0,answer = 0,output2 = 0,output3 = 0,output1 = 0;
    scanf("%d",&numberOfGroups);
    int groups[numberOfGroups];
    for (int i = 0; i < numberOfGroups; i++) {
        scanf("%d",&groups[i]);
    }
    for (int i = 0; i < numberOfGroups; i++) {
        if (groups[i] == 4){
            numberOfFour++;
        }else if (groups[i] == 3){
            numberOfThree++;
        }else if (groups[i] == 2){
            numberOfTwo++;
        }else{
            numberOfOne++;
        }
    }
    if (numberOfTwo != 1 ){
        if (numberOfTwo % 2 == 0){
            output2 = numberOfTwo/2;
            numberOfTwo = 0;
        }else{
            output2 = numberOfTwo/2;
            numberOfTwo = 1;
        }
    }
    output3 = numberOfThree - numberOfOne;
    if (output3 == 0){
        output3 = numberOfThree;
        numberOfOne = 0;
        numberOfThree = 0;
    }else if (output3 > 0){
        numberOfThree = output3;
        output3 = numberOfOne;
        numberOfOne = 0;
    }else{
        numberOfOne = abs(output3);
        output3 = numberOfThree;
        numberOfThree = 0;
    }
    if (numberOfTwo == 0){
        if (numberOfOne % 4 == 0) {
            output1 = numberOfOne/4;
        }else{
            output1 = (numberOfOne/4) + 1;
        }
    }
    else if(((numberOfOne - numberOfTwo) == 1) || ((numberOfOne - numberOfTwo) == 0) || ((numberOfOne - numberOfTwo) < 0)){
        output2++;
        numberOfOne = 0;
        output1 = 0;
    }else{
        output2++;
        output1 = numberOfOne - (numberOfTwo * 2);
        if (output1 % 4 == 0) {
            output1 = output1/4;
        }else{
            output1 = (output1/4) + 1;
        }
    }
    answer = numberOfFour + output2 + numberOfThree + output3 + output1;
    printf("%d\n",answer);
    return 0;
}
