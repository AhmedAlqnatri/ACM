//
//  main.c
//  Word Capitalization
//
//  Created by Sheldon Alqnatri on 10/02/2020.
//  Copyright © 2020 Sheldon Alqnatri. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main() {
    char word [1001];
    scanf("%s",word);
    word[0] = toupper(word[0]);
    printf("%s\n",word);
    return 0;
}
