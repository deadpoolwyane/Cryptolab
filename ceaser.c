#include<stdio.h>
#include<string.h>
int asciifind(char a ,int key)
{
 int count=0;
 int x = a;
 if ((x>=65)&&(x<=90))
	{
//	printf("enter\n");
	if ((x+key)>90){
	 count=count%91;
//	printf("enter");
	 count=count+65;
	 return count;
	}
	else return (x+key);
}
 else if ((x>=97)&&(x<=122))
	{
//	printf("enter\n");
	if ((x+key)>122){
	 count=count%123;
//	printf("enter");
	 count=count+97;
	 return count;
	}
else 
return (x+key);
	}
else{
return 65;
}
}

void main()
{
int key;
int i=0;
int value;
char x[20];
printf("Enter the text to be ceaser ciphered");
scanf("%s",x);
printf("Enter the default key");
scanf("%d",&key);
for(i=0;i<strlen(x);i++)
{
//printf("sada");
value=asciifind(x[i],key);
printf("%c",value);
}
}
