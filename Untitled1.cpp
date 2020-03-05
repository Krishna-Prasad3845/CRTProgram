#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int Data;
	struct Node *Next;
};

void insertNode();
void removeNode();
void display();
 
int main(){
	int x;
	while(1){
		printf("\n Linked List Opearations:");
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

  
