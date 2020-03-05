#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int Data;
	struct Node *Next;
	}*S,*L,*C,*P;

void insertNode();
void removeNode();
void display();
 
int main(){
	int x;
	S=L=C=P=NULL;
	while(1){
		printf("\n Linked List Operations:");
		printf("\n 1.Insert:");
		printf("\n 2.Remove:");
		printf("\n 3.Display:");
		printf("\n 4.Exit");
		printf("\n Enter the choice :");
		scanf("%d",&x);
		switch(x){
		case 1: insertNode();
		break;
		case 2: removeNode();
		break;
		case 3: display();
		break;
		case 4: printf("\n Program is Terminating...");
		return 0;
		break;
		
		}	
	}
	return 0;
  } 
void insertNode(){
	//Allocate the memory for new node
	struct Node *nn;
	nn=(struct Node *)malloc(sizeof(struct Node));
	//Accept the Value Field
	printf("\n Enter the Data:");
	scanf("%d",&nn->Data);
	// Make the New Node Address Field Points to Null
	nn->Next=NULL;
	//Check It having sinlge or more than single node
	if(S==NULL){
		S=L=nn;
	}
	else{
		L->Next = nn;
		L= nn;
	}
	printf("\n New node is Inserted...");
	getch();
	
}
void display(){
	if(S==NULL){
		printf("\n Linked List is Empty");
	}
	else{
		printf("\n Linked List:");
		printf("\n----------\n");
		for(C=S;C!=NULL;C=C->Next)
		{
			printf("\n%d",C->Data);
			//printf("%u",C->Next);
		}
	}
	getch();
	
}
void removeNode(){
	printf("\n remove");
	getch();
	
}
  
