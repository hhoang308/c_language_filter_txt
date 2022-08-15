#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

const char* filename = "nw_config.cfg";

void read_words (FILE *f) {
    char x[1024];
    /* assumes no word exceeds length of 1023 */
    while (fscanf(f, " %1023s", x) == 1) {
    	if(!strcmp(x, "interface")){
    		printf("%s=", x);
    		while(fscanf(f, " %1023s", x) == 1){
    			char *result = x+1; // removes first character
  				result[strlen(result)-1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if(!strcmp(x, "ifname")){
    		printf("%s=", x);
    		while(fscanf(f, " %1023s", x) == 1){
				char *result = x+1; // removes first character
  				result[strlen(result)-1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if(!strcmp(x, "proto")){
    		printf("%s=", x);
    		while(fscanf(f, " %1023s", x) == 1){
				char *result = x+1; // removes first character
  				result[strlen(result)-1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if(!strcmp(x, "ipaddr")){
    		printf("%s=", x);
    		while(fscanf(f, " %1023s", x) == 1){
				char *result = x+1; // removes first character
  				result[strlen(result)-1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
		if(!strcmp(x, "netmask")){
    		printf("%s=", x);
    		while(fscanf(f, " %1023s", x) == 1){
				char *result = x+1; // removes first character
  				result[strlen(result)-1] = '\0'; // removes last character
				printf("%s\n", result);
				break;
			}
		}
    }
}
int main(int argc, char *argv[])
{
    FILE *in_file = fopen(filename, "r");
//    if (!in_file) 
//    {
//        perror("fopen");
//        return 0;
//    }
// 
//    struct stat sb;
//    if (stat(filename, &sb) == -1) 
//    {
//        perror("stat");
//        return 0;
//    }
// 
//    char *file_contents = malloc(sb.st_size);
// 
//    while (fscanf(in_file, "%39[^-\n ] ", file_contents) != EOF) {
//      printf("> %s\n", file_contents);
//      }
//     
//     
// 
	read_words(in_file);
    fclose(in_file);
    return 0;
}
