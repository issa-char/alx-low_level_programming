#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
		if (filename == NULL)
		{
				return (-1);
		}

		if (text_content == NULL)
		{
				FILE *fp = fopen(filename, "r");
				if (fp != NULL)
				{
						fclose(fp);
						return (1);
				}
				else
				{
						return(-1);
				}
		}

		FILE *fp = fopen(filename, "a");
		if (fp == NULL)
		{
				return(-1);
		}

		fputs(text_content, fp);
		fclose(fp);

		return 1:
}

