#include<stdio.h>
#include<string.h>
int asciifind(char a )
{
 int count=0;
 int x = a;
 if ((x>=65)&&(x<=90))
	{
	count = (25-(90-x));
	return count;
	}
 else if ((x>=97)&&(x<=122))
	{
	count = (25-(122-x));
	return count;}
else {
return 1;
}
}
void main()
{
int m;
int i=0;
int x[20];
int k[20],t[20];
char key[20];
char text[20];
int a;
printf("Enter the text\n");
scanf("%s",text);
printf("Enter the key\n");
scanf("%s",key);
for (i=0;i<strlen(key);i++)
{
a=asciifind(key[i]);
k[i]=a;
}
for (i=0;i<strlen(key);i++)
{
a=asciifind(text[i]);
t[i]=a;
}
for (i=0;i<strlen(key);i++)
{
x[i]=t[i]^k[i];
}
for(i=0;i<strlen(key);i++){
m=(x[i]%26);
m=65+m;
printf("%c",m);
}
}	
