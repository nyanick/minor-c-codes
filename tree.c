/*program to insert words in a binary tree 
 *
 *the input is done through redirection of any file
 * 	by NDE YANICK CHE
 *
 * */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node *link;
struct node{
	link left;
	int freq;
	char *words;
	link right;
};

void inOrder_printing( link h );
void insert(link *h, char *word , int i);

int main(){
	
	int c; link temp;
	int i=0; char word[30];
	temp = NULL;
	while((c=getchar())!=EOF)
	{
		i++;
		//checking for any space or punctuation sign
		if(isspace(c) || ispunct(c))
		{
			word[i]='\0';
			insert(&temp, word , (i+1) );
			i=0;
		}
		else if(c!='\n'){
			 
			word[i]=c;
		}
		
	}
	//printing out the tree
	inOrder_printing(temp);
	
	return 0;
}


void inOrder_printing( link h )
{
/* if tree is not empty then traverse */
if ( h != NULL ) {
	inOrder_printing( h->left );
	printf( "%3d\t%s\n", h->freq,h->words );
	inOrder_printing( h->right );
	} /* end if */

}

//the function that insert in the tree
void insert(link *h, char *word , int i){
	
	if((*h) == NULL){
		(*h) = malloc( sizeof(link));
		(*h)->words=malloc(i+1);
	
		if((*h)!= NULL){
			strcpy((*h)->words,word);
			(*h)->freq=1;
			(*h)->left= NULL;
			(*h)->right=NULL;
		}
	
		else{
			printf("not inserted, no memory available\n");
		}
	}
		//implementation of inorder traversal
	else {
		if(strcmp((*h)->words,word)<0){
			insert((&((*h)->left)), word, (i+1));
		}
		
		else if(strcmp((*h)->words,word)>0){
			insert((&((*h)->right)), word, (i+1));
		}
		
		else{
			(*h)->freq++;
		}	
	}
}
