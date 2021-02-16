#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*int main(){
 char S[100],X[100],W[100];
 printf("\nENTER STRING : ");
	scanf("%s",S);
	strcpy(X,S);
	strcpy(W,strrev(S));
	if(strcmp(X,W)==0)
	printf("\nYES");
	else
	printf("\nNO");
	return 0;
}*/
/*int main()
{
    char S[50];
	int len,c=0,i,j;
    scanf("%s",S);
    len=strlen(S)-1;
	for(i=0,j=len;i<len,j>0;i++,j--)
	{	if(S[i]!=S[j])
	{printf("NO");
	break;}
	else
	c++;
}
if(c==len)
printf("YES");


    return 0;
}
*/

//#include <stdio.h>

//#include<string.h>

int main()
{
    char S[100];
    printf("\nENTER STRING ");
    scanf("%s",S);
    int i,flag=0;
    int n=strlen(S);
for(i=0;i<n;i++)
{
if(S[i]!=S[n-i-1])
{
    flag=1;
    break;
}
    }
    if(flag)
        printf("\nNO");
    else
    printf("\nYES");

}
