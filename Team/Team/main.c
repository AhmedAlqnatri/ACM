//
//  main.c
//  Team
//
//  Created by Sheldon Alqnatri on 09/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>

int main() {
    int numberOfProblems, count = 0, result = 0;
    scanf("%d",&numberOfProblems);
    int problems[numberOfProblems][3];
    for (int i = 0; i < numberOfProblems; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d",&problems[i][j]);
        }
    }
    for (int i = 0 ; i < numberOfProblems; i++){
        for (int j =0; j < 3; j++) {
            //printf("%d ",problems[i][j]);
            count += problems[i][j];
        }
        if (count >= 2){
            result++;
        }
        count = 0;
    }
    printf("%d\n",result);
    return 0;
}
