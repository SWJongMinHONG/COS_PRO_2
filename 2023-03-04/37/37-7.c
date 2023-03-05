#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Pachelbel Canon";
	char *s2 = "Pachelbel Canon";;
	
	int ret = strcmp(s1, s2);
	printf("¹ÝÈ¯°ª : %d\n", ret);

	return 0;
}