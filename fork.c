#include <unistd.h>
#include <stdio.h>
int main()
{
	int i;
	int pid1 = fork();
	int pid2 = fork();
	printf("No.1510431010")
	if(pid1 <0 ||pid2 < 0)
	{
		printf("error!\n");
	}
	else if(pid1 == 0 && !pid2)
	{
		for( i=0;i<3;i++)
			printf("I am son!\n");
	}
	else if(pid2 == 0&&!pid2)
	{
		for( i=0;i<3;i++)
			printf("I am daughter!\n");	
	}
	else if(pid1!=0&&pid2!=0)
	{	for(i=0;i<3;i++)
		printf("This is the parent process! My son is %d, My daughter is %d\n",pid1,pid2);
	}
	return 0;
}
