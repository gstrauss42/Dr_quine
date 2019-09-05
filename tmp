const char data [] =
"#include <stdio.h>\n\nint\nmain (void)\n{\n  unsigned int i;\n\n  p"
"rintf (\"const char data [] =\");\n  for ( i=0 ; data[i] ; i++ "
")\n    {\n      if ( i%60 == 0 )\n\tprintf (\"\\n\\\"\");\n      switc"
"h ( data[i] )\n\t{\n\tcase '\\\\':\n\tcase '\"':\n\t  printf (\"\\\\%c\", d"
"ata[i]);\n\t  break;\n\tcase '\\n':\n\t  printf (\"\\\\n\");\n\t  break;\n"
"\tcase '\\t':\n\t  printf (\"\\\\t\");\n\t  break;\n\tdefault:\n\t  printf"
" (\"%c\", data[i]);\n\t}\n      if ( i%60 == 59 || !data[i+1] )\n\t"
"printf (\"\\\"\");\n    }\n  printf (\";\\n\\n\");\n  for ( i=0 ; data["
"i] ; i++ )\n    putchar (data[i]);\n  return 0;\n}\n";

#include <stdio.h>

int
main (void)
{
  unsigned int i;

  printf ("const char data [] =");
  for ( i=0 ; data[i] ; i++ )
    {
      if ( i%60 == 0 )
	printf ("\n\"");
      switch ( data[i] )
	{
	case '\\':
	case '"':
	  printf ("\\%c", data[i]);
	  break;
	case '\n':
	  printf ("\\n");
	  break;
	case '\t':
	  printf ("\\t");
	  break;
	default:
	  printf ("%c", data[i]);
	}
      if ( i%60 == 59 || !data[i+1] )
	printf ("\"");
    }
  printf (";\n\n");
  for ( i=0 ; data[i] ; i++ )
    putchar (data[i]);
  return 0;
}
