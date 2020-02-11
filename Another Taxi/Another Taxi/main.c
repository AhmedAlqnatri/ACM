//
//  main.c
//  Another Taxi
//
//  Created by Sheldon Alqnatri on 11/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>


int main()
{
    int input, number, count[5]= {0};
    scanf("%d", &input);
    while (input--)
    {
        scanf("%d", &number);
        count[number] += 1;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
}
