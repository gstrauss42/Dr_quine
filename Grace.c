#include <fcntl.h>/*the specified comment*/
#include <stdio.h>

#define waste 10
#define data "#include <fcntl.h>/*the specified comment*/%c#include <stdio.h>%c%c#define waste 10%c#define data %c%s%c%c#define MAIN int main(void){int fd = open(%cGrace_kid.c%c, O_RDWR); dprintf(fd, data, waste, waste, waste, waste, 34, data, 34, waste, 34, 34, waste, waste);}%cMAIN%c"
#define MAIN int main(void){int fd = open("Grace_kid.c", O_RDWR); dprintf(fd, data, waste, waste, waste, waste, 34, data, 34, waste, 34, 34, waste, waste);}
MAIN
