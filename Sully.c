#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#define data "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <fcntl.h>%c%c#define data %c%s%c%c%cint	main()%c{%c	char *buff = strdup(%cSully_X.c%c);%c	int i = %d;%c	buff[6] = i + 48;%c	FILE	*fd = fopen(buff, %cw+%c);%c	fprintf(fd, data, 10, 10, 10, 10, 10, 34, data, 34, 10, 10, 10, 10, 34, 34, 10, (i - 1), 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);%c	char *qack = strdup(%cSully_X %c);%c	qack[6] = i + 48;%c	char *tmp = strdup(%cgcc -o %c);%c	tmp = strdup(strcat(tmp, qack));%c	char *val = strdup(strcat(tmp, buff));%c	fclose(fd);%c	char *ttmp = strdup(%c./%c);%c	if (i == 0)%c		return (0);%c	system (val);%c	system (strcat(ttmp, qack));%c	free(buff); free(ttmp); free(val);%c}%c"
int	main()
{
	char *buff = strdup("Sully_X.c");
	int i = 5;
	buff[6] = i + 48;
	FILE	*fd = fopen(buff, "w+");
	fprintf(fd, data, 10, 10, 10, 10, 10, 34, data, 34, 10, 10, 10, 10, 34, 34, 10, (i - 1), 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);
	char *qack = strdup("Sully_X ");
	qack[6] = i + 48;
	char *tmp = strdup("gcc -o ");
	tmp = strdup(strcat(tmp, qack));
	char *val = strdup(strcat(tmp, buff));
	fclose(fd);
	char *ttmp = strdup("./");
	if (i == 0)
		return (0);
	system (val);
	system (strcat(ttmp, qack));
	free(buff); free(ttmp); free(val);
}
