#include <stdio.h>

int main () {
	
	char filmad[20],filmturu[20],filmsuresi[20],filmbasrol[20];
	
	printf("filmin adi: ");
	scanf("%s",filmad);
	
	printf("filmin turu: ");
	scanf("%s",filmturu);
	
	printf("filmin süresi: ");
	scanf("%s",filmsuresi);
	
	printf("filmin basrolu: ");
	scanf("%s",filmbasrol);
	
	printf("\n \n \n \n");
	
	printf("film adi: %s - filmin turu: %s - filmin  süresi: %s",filmad,filmturu,filmsuresi);
	printf("\n");
	printf("film basrolu: %s",filmbasrol);
		
	
}
