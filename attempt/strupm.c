#include "strup.h"

int main()
{
	//char tab[] = "hallo";
	//char *tab;
	//tab = "hallo";
	//char *tab = (char *) malloc(sizeof(char)*1);
	char *tab = malloc(sizeof(char)*8);
	char *pom = "hallo";
	int i = 0;
	while (pom[i])
	{
		tab[i] = pom[i];
		i++;
	}
	printf("pom %s\n", pom);
	printf("tab %s\n", tab);
	printf("strup %s\n", strup(tab));
}
