#include <fcntl.h>
#include <unistd.h>

#define data int main(void){int fd = open("Grace_kid.c", O_RDWR); write(fd, "works", 5);}

data
