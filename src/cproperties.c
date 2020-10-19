#include "cproperties.h"
#include <wchar.h>

struct properties_object {
    const wchar_t * key;
    wchar_t * value;
    properties_t * children;
};

properties_t properties_create(){

    return
}

int properties_parse (const char * file_name,properties_t * p){
    if(file_name == NULL){
        return -1;
    }
    if(p == NULL){
        return -1;
    }
}
