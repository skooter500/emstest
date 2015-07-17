#include<stdio.h>


int main(int argc,char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: test inputfile outputfile\n");
	}
	for (int i = 0 ; i < argc ; i ++)
	{
		printf("%d %s\n", i, argv[i]);
	}
	
	char buf[1000];
	FILE * in = fopen(argv[1], "r");
	FILE * out = fopen(argv[2], "w");
	if (in == NULL)
	{
		printf("Could not read file %s\n" , argv[1]);
		return -1;
	}
	if (out == NULL)
	{
		printf("Could not write file %s\n" , argv[2]);
		return -1;
	}
	while (fgets(buf,1000, in)!=NULL)
	{
		printf("%s", buf);
		fprintf(out, "%s", buf);
	}
	fclose(in);
	fclose(out);
	
	return 0;
}

int test()
{
	char * params[] = {"", "in.abc", "out.mid"};
	main(3, params);
	return 0;
}