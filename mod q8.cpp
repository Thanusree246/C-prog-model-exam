#include<stdio.h>
#include <string.h>
#include <ctype.h>
 int main()
 {
 Char input[100], output[100];
int i,j=0;
printf("enter a string:");
fgets(input, sizeof(input), stdin); 10. for(i=0;i<strlen(input);i++);
for(i=0;i<strlen(input);i++){
if(lisalpha(input[i]) && lisdigit(input[i]))
{
output[j]=input[i];
j++;
}
}
output[i]'\0';
 printf("output:%s", output);
 return 0;
}
