#ifndef C_PROPERTIES_H
#define C_PROPERTIES_H
#include <uchar.h>

typedef struct properties properties_t;

/**
 * parse properties file
 * file_name: properties file name
 * p : properties
 * */

properties_t properties_create();

int properties_parse(const char *file_name, properties_t *p);

#endif //C_PROPERTIES_H
