#ifndef C_PROPERTIES_H
#define C_PROPERTIES_H

struct properties {
    const char * key;
    const char * value;
    const struct properties * children;
};

/**
 * parse properties file
 * file_name: properties file name
 * p : properties
 * */

struct properties properties_create();

int properties_parse (const char * file_name,struct properties * p);

#endif //C_PROPERTIES_H
