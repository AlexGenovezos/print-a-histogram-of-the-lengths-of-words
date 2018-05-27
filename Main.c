#include <stdio.h>

main()
{
	int c, i, count;
	int lword[10];
	count = 0;

	for (i = 0; i < 10; ++i)
		lword[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			count++;
		else
			{
				if (count >= '0' && count <= '9') // count never goes in here
				++lword[count];
				count = 0;
			}
		{
			/*if (count >= '0')
				printf("%d", count);
			if (count <= '9')*/

		}
	}
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", lword[i]);
}