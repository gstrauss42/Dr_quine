#include <stdio.h>
#include <stdlib.h>

#define data "#include <stdio.h>%c%c#define data %c%s%c%c%cint	main()%c{%c	FILE	*fd = fopen(%cSully_%d.c%c, %cw+%c);%c	fprintf(fd, data, 10, 10, 34, data, 34, 10, 10, 10, 10, 34, 5, 34, 34, 34, 10, 10, 10);%c}%c"

int	main()
{
	FILE	*fd = fopen("Sully_X.c", "w+");
	fprintf(fd, data, 10, 10, 34, data, 34, 10, 10, 10, 10, 34, 5, 34, 34, 34, 10, 10, 10);
}
