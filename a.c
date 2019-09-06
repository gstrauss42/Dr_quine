#include <stdio.h>/*comment*/

void	tmp(void);

int	main()
{
	char *str = "#include <stdio.h>/*comment*/%c%cvoid	tmp(void);%c%cint	main()%c{%c	char *str = %c%s%c;%c	printf(str, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10, 10, 10, 10, 10);/*things*/%c	tmp();%c}%c%cvoid	tmp(void)%c{%c}%c";
	printf(str, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10, 10, 10, 10, 10);/*things*/
	tmp();
}

void	tmp(void)
{
}
