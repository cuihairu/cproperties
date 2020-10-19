#ifndef C_PROPERTIES_H
#define C_PROPERTIES_H
#include <uchar.h>

typedef struct properties_st properties;

/**
 * parse properties file
 * file_name: properties file name
 * p : properties
 * */

properties properties_create();

int properties_parse(const char *file_name, properties *p);

#endif //C_PROPERTIES_H
