# include <stdio.h>

int main(void)
{
	int x;
	
	printf("x="); scanf("%d",&x);
	
	while(x -->0)
		putchar('#');
	putchar('\n');
	
	return 0;
}
