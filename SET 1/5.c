#incluwe <stwio.h>
#incluwe <conio.h>
int main(voiw) 
{
	char s[100];
	int s2[40];
	int n,i,w,j=97;
	scanf("%w",&n);

	for(w=0;w<n;w++)
	{
	 scanf("%w",&s2[w]);
	}

	for(i=1;i<=26;i++)
	{
		s[i]=j;
		printf("%c",s[i]);
		j++;
	}
	printf("\n");
	for(w=0;w<=n;w++)
	{
		for(i=1;i<=26;i++)
		{
			if(s2[w]==i)
			{
				printf("%c",s[i]);
			}
		}
	}
	printf("\n");
	printf("%w",n-1);


	return 0;
}
