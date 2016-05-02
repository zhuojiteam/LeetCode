#include <stdio.h>
int main(){
	char s[10001], string[6]={'P', 'A', 'T', 'e', 's', 't'};
	int i, j, PATest[6]={0,0,0,0,0,0};
	gets(s);

	for(i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case 'P': PATest[0]++;
				break;
			case 'A': PATest[1]++;
				break;
			case 'T': PATest[2]++;
				break;
			case 'e': PATest[3]++;
				break;
			case 's': PATest[4]++;
				break;
			case 't': PATest[5]++;
				break;
		}
	}

	while (PATest[0] || PATest[1] || PATest[2] || PATest[3] || PATest[4] || PATest[5])
	{
		for (j = 0; j < 6; ++j)
		{
			if (PATest[j] != 0)
			{
				printf("%c", string[j]);
				PATest[j]--;
			}
		}
	}

	return 0;

}