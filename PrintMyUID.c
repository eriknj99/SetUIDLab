#include <stdio.h>
#include <stdlib.h>

//PrintMyUID.c

int main(){
	printf("Hello! My UID is:\n");
	system("id -u $(whoami)");

	printf("\nwhich corresponds to the user: \n");
	system("/bin/cat /etc/shadow");

	return 0;

}
