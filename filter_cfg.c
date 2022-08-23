#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

const char *filename = "nw_config.cfg";

void read_words(FILE *f)
{
	char x[1024];
	/* assumes no word exceeds length of 1023 */
	while (fscanf(f, " %1023s", x) == 1)
	{
		if (!strcmp(x, "interface"))
		{
			printf("%s=", x);
			while (fscanf(f, " %1023s", x) == 1)
			{
				char *result = x + 1;			   // removes first character
				result[strlen(result) - 1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if (!strcmp(x, "ifname"))
		{
			printf("%s=", x);
			while (fscanf(f, " %1023s", x) == 1)
			{
				char *result = x + 1;			   // removes first character
				result[strlen(result) - 1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if (!strcmp(x, "proto"))
		{
			printf("%s=", x);
			while (fscanf(f, " %1023s", x) == 1)
			{
				char *result = x + 1;			   // removes first character
				result[strlen(result) - 1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if (!strcmp(x, "ipaddr"))
		{
			printf("%s=", x);
			while (fscanf(f, " %1023s", x) == 1)
			{
				char *result = x + 1;			   // removes first character
				result[strlen(result) - 1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if (!strcmp(x, "netmask"))
		{
			printf("%s=", x);
			while (fscanf(f, " %1023s", x) == 1)
			{
				char *result = x + 1;			   // removes first character
				result[strlen(result) - 1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
	}
}
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		FILE *in_file = fopen(filename, "r");
		read_words(in_file);
		fclose(in_file);
	}
	else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
	{
		printf("Info: Pham Duc Hai\n");
		printf("Dai hoc Cong Nghe - DHQGHN\n");
		printf("phamduchai@gmail.com\n");
		printf("091231842\n");
		printf("usage nwcfg [OPTIONS]\n");
		printf("	  OPTIONS :-	--help	-h showhelp\n");
		printf("				.....\n");
	}

	return 0;
}
