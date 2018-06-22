#include <stdio.h>
#include <conio.h>
int main() 
{
	int t=0,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 int x;
	 scanf("%d ",&x);
	 t^=x;
	}
	printf("%d ",t);

	return 0;
}
