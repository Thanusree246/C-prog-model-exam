#include<stdio.h>
int main()
{
	int i,j,rows,col;
	printf("enter the rows and cols:");
	scanf("%d%d",&rows,&col);
	for(i=1;i<=rows;i++){
		for(j=1;j<=col;j++){
			if(i==1||i==rows||j==col)
			printf(*);
			else
			printf(" ");
		}
	}
	printf("\n");
}
return 0;	
}
