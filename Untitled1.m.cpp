#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int a[5],top=-1,x,i;
	while(1){
		printf("\n-------------");
		printf("\n Stack operations ");
		printf("\n 1. PUSH ");
		printf("\n 2. POP ");
		printf("\n 3. PEEK ");
		printf("\n 4. DISPLAY ");
		printf("\n 5. EXIT ");
		printf("\n Enter your Choice : ");
		scanf("%d",&x);
		switch(x){
			case 1: if(top < 4)
			       {
			       	top++;
			       	printf("\n Enter a Value: ");
			       	scanf("%d",&a[top]);
			       	printf("\n Value is Pushed to stack");
			       	getch();
				   }
				   else{
				   	printf("\n Stack is Full\n Stack is Overflow");
				   	getch();
				   }
			break;
			case 2: if(top!=-1)
			       {
				    a[top] = 0;
				    top--;
				    printf("\n Value is removed...");
				    getch();
				   }
				   else{
					    printf("\n Stack is Empty\nStack is Underflow");
					    getch();
				   }
			break;
			case 3: if(top!=-1)
			       {
				    printf("\n Peek value is : %d",a[top]);
				    getch();
			       }
			       else{
				        printf("\n Stack is Empty\nStack is Underflow");
				        getch();
			       }	   
			break;
			case 4: if(top!=-1)
			       {
				    printf("\n ---------------");
				    printf("\n Stack Values are :\n");
				    for(i=top;i>=0;i--){
				       printf("%d",a[i]);
			       }
			       getch();
			   }
		         else{
			          printf("\n Stack is Empty\n Stack is Underflow");
			          getch();
		         }
		    break;
		    case 5: printf("\n Program is terminating...");
		    return 0;
		    break;
		   }
		}
		return 0;
}
