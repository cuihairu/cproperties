#include "cproperties.h"
#include <stdio.h>

struct properties_st {
    const char * key;
    char * value;
    properties * children;
};

properties properties_create(){

}

int properties_parse (const char * file_name,properties * p){
    if(file_name == NULL){
        return -1;
    }
    if(p == NULL){
        return -1;
    }
}
