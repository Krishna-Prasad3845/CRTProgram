//To  Working with Remove Node//
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
void cntNode();
void midNode();
void altNode();
int main(){
	int x;
	S=L=C=P=NULL;
	while(1){
		printf("\n Linked List Opearations:");
		printf("\n 1.Insert:");
		printf("\n 2.Remove:");
		printf("\n 3.Display:");
		printf("\n 4.Cnt Nodes:");
		printf("\n 5.Middle Value:");
		printf("\n 6.Alt Nodes");
	    printf("\n 7. Exit");
		printf("\n Enter the choice :");
		scanf("%d",&x);
		switch(x){
		case 1: insertNode();
		break;
		case 2: removeNode();
		break;
		case 3: display();
		break;
		case 4: cntNode();
		break;
		case 5: midNode();
		break;
		case 6: altNode();
		break;
		case 7: printf("\n Program is Terminating...");
		return 0;
		break;
		
		}	
}
return 0;
} 
  void insertNode(){
  	struct Node *nn;
  	int b,i=1;
  	nn=(struct Node *)malloc(sizeof(struct Node));
  	printf("\n Enter the Data:");
	scanf("%d",&nn->Data);
	nn->Next=NULL;
	if(S==NULL){
		S=L=nn;
	}
	else{
			printf("\n Enter the Position:");
	        scanf("%d",&b);
	        
		if(b==1){
			nn->Next=S;
			S=nn;
			
		}
		else{
			for(C=S;i<b;P=C,C=C->Next,i++);
			nn->Next=C;
			P->Next = nn;
		}
	}
	printf("\n Node is Inserted...");
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
			printf("%d ",C->Data);
			//printf("%u",C->Next);
		}
	}
	getch();

}
void removeNode(){
	if(S==NULL){
	printf("\n Linked List is Empty");

}
else{
	if(S->Next==NULL){
		S=L=NULL;
	}
	else{
		C=S;
		S=S->Next;
		C->Next=NULL;
		C=NULL;//free(c);
	}
	printf("\n Node is Deleted from the Start...");
}
	getch();

}
void cntNode(){
	int cnt=0;
	if(S==NULL){
		printf("");
	}
		else{
			for(C=S;C!=NULL;C=C->Next){
				cnt++;
			}
		}
		printf("%d",cnt);
			getch();
	}
void midNode(){
	int cnt=0,x,i=1;
	for(C=S;C!=NULL;C=C->Next){
				cnt++;
}
if(cnt%2==0){
   x=cnt/2;
}
else{
	x=(cnt+1)/2;
	
}
for(C=S;i<x;C=C->Next,i++);
{
	printf("%d",C->Data);
	getch();
}
}
void altNode(){
	int cnt=0,m=0;
	for(C=S;C!=NULL;C=C->Next){
				cnt++;
}
for(C=S;C!=NULL;C=C->Next,m++){
if(m%2==0){
	printf("%d", C->Data);
}
else{
	printf("->");
	getch();
}
}
}

  

	


