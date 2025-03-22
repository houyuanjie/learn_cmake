#include "hello.h"

static const char *message = "Hello, World!";

void get_message(char *str, int len_str)
{
    if (len_str < CSTR_LEN(message))
    {
        printf("[ERROR] Buffer too small, required %d chars, but only %d chars given.\n", CSTR_LEN(message), len_str);
        return;
    }

    strncpy(str, message, len_str);
}