#include "hello.h"

int main(int argc, char const *argv[])
{
    char str[100];

    get_message(str, sizeof(str) / sizeof(char));
    puts(str);

    return 0;
}