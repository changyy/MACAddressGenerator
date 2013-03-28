#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

#define IPV4_LENGTH 17
void help(char *cmd) {
	printf("Usage> %s -p mac_prefix", cmd);
	printf("\n\t -p mac_address_prefix: -p 00:11:22:33:44" );
	printf("\n");
}
int main(int argc, char **argv) {
	char output[IPV4_LENGTH];
	int i, length;
	memset(output, '\0', IPV4_LENGTH );
	if( argc > 1 ) {
		if( !strncmp( argv[1], "-h", 2 ) ) {
			help(argv[0]);
			exit(0);
		}
		if( argc > 2 && !strncmp( argv[1], "-p", 2 ) && (length = strlen(argv[2])) > 0 ) {
			strncpy( output, argv[2], length > IPV4_LENGTH ? IPV4_LENGTH : length );
		}
	}
	srand(time(NULL));
	for( i=strlen(output) ; i<IPV4_LENGTH ; ++i ) {
		if( ( i % 3 ) == 2 ) {
			output[i] = ':';
		} else {
			output[i] = rand() % 16;
			if( output[i] < 10 )
				output[i] += '0';
			else
				output[i] = output[i] + 'A' - 10 ;
		}
	}
	printf("%s",output);
	return 0;
}
