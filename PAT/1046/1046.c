#include <stdio.h>
int main(){
	int n,countJ=0,countY=0,jMouth,jHand,yMouth,yHand,i;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d %d %d %d", &jMouth, &jHand, &yMouth, &yHand);
		
		if (jHand == jMouth + yMouth)
		{
			if (yHand != jMouth + yMouth)
			{
				countJ++;
			}
		}
		if (yHand == jMouth + yMouth)
		{
			if (jHand != jMouth + yMouth)
			{
				countY++;
			}
		}

	}

	printf("%d %d", countJ, countY);


}