//
//  main.c
//  Theatre Square
//
//  Created by Sheldon Alqnatri on 08/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    double n,m,a;
    scanf("%lf %lf %lf",&n,&m,&a);
    if (n >=1 && m >= 1 && a >=1){
       
        double output1 = n/a;
        
        double output = m/a;
        int long long out1 = ceil(output);
        int long long out2 = ceil(output1);
        printf("%lld\n",out2*out1);
    }
   // printf("%d\n",((int)(output * output1)));
    return 0;
}
