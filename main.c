//
//  main.c
//  
//
//  Created by Gerhard Dueck on 2018-02-04.
//

#include "mystring.h"
#include <stdio.h>
#include <string.h>

// test the functions in mystring

int main(int argv, char **argc){
    char str[] = "this is the test string for this program!";
    printf("The string = \"%s\"\n", str);
    printf("The string has %d charcters\n", my_strlen(str));
    int ch = 'i';
    printf("The letter \'%c\' occurs %d times\n", ch, my_countchar(str, ch));
    my_strupper(str);
    printf("\nmy_strupper(str)\n");
    printf("%s\n", str);
    
    char ch2[] = "RHX";
    for(char *i = ch2; *i ; i++){
        char *res = my_strchr(str, *i);
        if(res){
            printf("%c found at %ld ==> %s\n", *i, res - str, res );
        }
        else{
            printf("%c not found\n", *i);
        }
    }
}
