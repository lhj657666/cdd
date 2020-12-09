#include <stdio.h>
#include <string.h>
void main()
{
	char s1[]="王康军是真人还是假人?";
    char s2[]="王康军是假人!";
	if(strcmp(s1,s2)==0){
	printf("王康军是真人\n");
	}
	else 
	{
    printf("王康军是假人\n");
	}
}
