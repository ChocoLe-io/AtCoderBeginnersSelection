#include<stdio.h>
int main()
{
	char s[9];
	int cnt = 0;

	scanf("%s", s);

	for (int i = 0; i < 3; i++)
	{
		if (s[i] == '1')
		{
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}