#include <fcntl.h>
#include <stdio.h>

#define data "#include <fcntl.h>%c#include <stdio.h>%c%c#define data %c%s%c%c#define MAIN int main(void){int fd = open(%cGrace_kid.c%c, O_RDWR);dprintf(1, data);}%cMAIN"
#define MAIN int main(void){int fd = open("Grace_kid.c", O_RDWR);dprintf(1, data, 10, 10, 10, 10, data, 10, 10, 34, 34, 10);}
MAIN
