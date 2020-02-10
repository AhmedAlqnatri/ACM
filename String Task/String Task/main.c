//
//  main.c
//  String Task
//
//  Created by Sheldon Alqnatri on 08/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
char isVowel(char ch)
{
    if( ch=='A' || ch=='a' ||
        ch=='E' || ch=='e' ||
        ch=='I' || ch=='i' ||
        ch=='O' || ch=='o' ||
        ch=='U' || ch=='u' ||
        ch=='Y' || ch=='y' )
        return 0;
    else
        return 1;
}

void eliminateVowels(char *buf){
    int i=0,j=0;
    while(buf[i]!='\0')
    {
        if(isVowel(buf[i])==0){
            for(j=i; buf[j]!='\0'; j++){
                buf[j]=buf[j+1];
            }
        }else{
            i++;
        }
    }
}
int main() {
    char str [101], ch;
    scanf("%[^\n]s",str);
    eliminateVowels(str);
    int len = (int)strlen(str), i, j;
    //printf("len is %d\n",len);
    char array[len];
    for (i = 0; i < len; i++){
        ch = tolower(str[i]);
        array[i] = ch;
    }
    /*char output[2*len];
    for (i = 0, j = 0; i < 2*len && j < len ; i++, j++){
        output[i] = '.';
        output[++i] = array[j];
    }*/
    for (j = 0; j < len; j++){
    printf(".%c",array[j]);
    }
    printf("\n");
    return 0;
}
