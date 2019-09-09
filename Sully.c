#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#define data "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <fcntl.h>%c%c#define data %c%s%c%c%cint	main()%c{%c	char *buff = strdup(%cSully_X.c%c);%c	int i = %d;%c	buff[6] = i + 48;%c	FILE	*fd = fopen(buff, %cw+%c);%c	fprintf(fd, data, 10, 10, 10, 10, 10, 34, data, 34, 10, 10, 10, 10, 34, 34, 10, (i - 1), 10, 10, 34, 34, 10, 10, 34, (i - 1), 34, 10, 10, 10, 10, 34, (i - 1), 34, 10, 10, 10);	%c	char *tmp = strdup(%cgcc -o Sully_%d %c);%c	char *val = strdup(strcat(tmp, buff));%c	fclose(fd);%c	system (val);%c	system (%c./Sully_%d%c);%c	free(buff); free(tmp); free(val);%c}%c"

int	main()
{
	char *buff = strdup("Sully_X.c");
	int i = 5;
	buff[6] = i + 48;
	FILE	*fd = fopen(buff, "w+");
	fprintf(fd, data, 10, 10, 10, 10, 10, 34, data, 34, 10, 10, 10, 10, 34, 34, 10, (i - 1), 10, 10, 34, 34, 10, 10, 34, (i - 1), 34, 10, 10, 10, 10, 34, (i - 1), 34, 10, 10, 10);
	char *tmp = strdup("gcc -o Sully_5 ");
	char *val = strdup(strcat(tmp, buff));
	fclose(fd);
	system (val);
	system ("./Sully_5");
	free(buff); free(tmp); free(val);
}
