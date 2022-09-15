#include<conio.h>
void main()
{
	char c;
	printf("Enter any char:");
	scanf("%c",&c);
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("consonant");
	}
	else
	{
		printf("vowel");
	}
	getch();
}
