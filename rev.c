#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,b;
	char a[100];
	printf("Input:");
	gets(a);
	for(j=0;a[j] !='\0';j++)
	{
		b++;
	}
	for(i=b-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
