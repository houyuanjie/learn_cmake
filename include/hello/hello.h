#ifndef _HELLO_H_
#define _HELLO_H_

#include <stdio.h>
#include <string.h>

#define CSTR_LEN(str) (strlen(str) + 1)

void get_message(char *str, int len_str);

#endif // _HELLO_H_