#include <stdio.h>
int main()
{
	void search(float(*p)[4], int n);
	float score[3][4] = { {59,61,61,61},{61,51,61,61},{61,61,61,61}};
	search(score,3);
	return 0;
}
void search(float(*p)[4],int n)
{

	int i, j;
	int m ;
	for (i = 0; i < n; i++)
	{
		m = 0;
		for (j = 0; j < 4; j++)
		{
			if (*(*(p + i) + j) < 60)
				m = 1;
			if (m)
			{
				printf("第%d位同学不及格",i+1);
				for (j = 0; j < 4; j++)
					printf("%5.2f   ", *(*(p + i) + j));
				    printf("\n");
			}
		}
    }
}