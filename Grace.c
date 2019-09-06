#include <fcntl.h>/*the specified comment*/
#include <stdio.h>

#define use 10
#define data "#include <fcntl.h>/*the specified comment*/%c#include <stdio.h>%c%c#define use 10%c#define data %c%s%c%c#define MAIN int main(void){FILE *fd = fopen(%cGrace_kid.c%c, %cw+%c); fprintf(fd, data, use, use, use, use, 34, data, 34, use, 34, 34, 34, 34, use, use);}%cMAIN%c"
#define MAIN int main(void){FILE *fd = fopen("Grace_kid.c", "w+"); fprintf(fd, data, use, use, use, use, 34, data, 34, use, 34, 34, 34, 34, use, use);}
MAIN
