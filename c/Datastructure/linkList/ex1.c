#include <stdio.h>
#include <stdlib.h>

#define IS_EMPTY( first ) (! ( first ) )
#define MALLOC( pointer, size ) \
	if ( ! ( (pointer) = malloc( size ) ) ) { \
		fprintf( stderr, "Insufficient memory" ); \
		exit (EXIT_FAILURE ); \
	}

struct listNode {
	int data;
	struct listNode * link;
};
typedef struct listNode ListNode;
typedef  ListNode * ListNodePtr;
ListNodePtr create2()
{
	ListNodePtr first, second;
	MALLOC( first, sizeof( *first ) );
	MALLOC( second, sizeof( *second ) );
	second->link = NULL;
	second->data = 20;
	first->data = 10;
	first->link = second;
	return first;
}

void printList( ListNodePtr sPtr )
{
	if ( sPtr != NULL ) {
		while ( sPtr != NULL ) {
			printf( "%d --> ", sPtr->data );
			sPtr = sPtr->link;
		}
		printf( "NULL \n\n" );
	}
	else 
		printf( "List is empty.\n" );
}

void insert( ListNodePtr * first, ListNodePtr x )
{	
	ListNodePtr temp;
	MALLOC( temp, sizeof( *temp ) );
	temp->data = 50;
	if ( *first ) {
		 temp->link = x->link;
		 x->link = temp;
	}
	else {
		 temp->link = NULL;
		 *first = temp;
	}
}
main( void )
{	
	ListNodePtr two;
	ListNodePtr one = create2(); 
	printList( one );
	return 0;
}

	
		


