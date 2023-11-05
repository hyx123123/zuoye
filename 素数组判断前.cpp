#include <stdio.h>
int main()
{
	int n,k=0;
	printf("请输入一个比一大的数：");
	scanf("%d", &n);
	int a[n]={0};
	for(int i=2;i<=n/i;i++){
		if(!a[i])
		for(int j=2;j*i<=n;j++){
			a[j*i]++;
		}
	}
	for(int i=1;i<100;i++){
		printf("%d ",a[i]);
	}
	
	
    return 0;
}

