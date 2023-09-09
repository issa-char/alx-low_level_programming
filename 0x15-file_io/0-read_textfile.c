ssize_t read_textfile(const char *filename, size_t letters)
{
		if(filename == NULL)
{
		return (0);
}
}

FILE *fp = fopen(filename, "r");
if (fp == NULL)
{
		return (0);
}

char bf[letters];

size_t bytes_read = fread(bf, 1, letters, fp);

fclose(fp);

if(bytes_read == 0)
{
		return (0);
}

fwrite(bf, 1, bytes_read, stdout);

return (bytes_read);
