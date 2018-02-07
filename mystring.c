//
//  mystring.c
//  
//
//  Created by Gerhard Dueck on 2018-02-04.
//

#include "mystring.h"
#include <ctype.h>
#include <stdlib.h>

int my_strlen(const char * str){

    int cnt = 0;
    while(*(str+cnt++));
    return cnt-1;
}

int my_countchar(const char * str, char ch){
    const char *pc = str;
    int cnt = 0;
    while(*pc != '\0'){
        if(*pc == ch){
            cnt++;
        }
        pc++;
    }
    return cnt;
}

void my_strupper(char * str){
    
}

char * my_strchr(const char * str, char ch){
    
    return NULL;
}
