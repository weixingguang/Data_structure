#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GetMemory( char *p )
{
	p = (char *) malloc( 100 );
}

void Test( void ) 
{
	char *str = NULL;
	GetMemory( str ); 
	if(str == NULL)
	{
		puts("Test NULL");
		return;
	}
	else
	{
		strcpy( str, "hello world" );
		puts( str );
	}
}

void main()
{
	Test();
}
