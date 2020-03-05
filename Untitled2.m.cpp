#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int a[5],F=-1,R=-1,x,i;
	while(1){
		printf("\n------------");
		printf(" Queue operations : ");
		printf("\n 1. Insert ");
		printf("\n 2. Remove ");
		printf("\n 3. Display");
		printf("\n 4. Exit ");
		printf("\n Enter your Choice : ");
		scanf("%d",&x);
		switch(x){
			case 1: if(R < 4)
			{
				R++;
				if(R == 0){
					F = 0;
				}
				printf("\n Enter a Value : ");
				scanf("%d",&a[R]);
				printf("\n Value is inserted to Queue ");
				getch();
			}
			break;
			case 2: if(F!=-1 && R!=-1)
			{
				if(F==R)
				{
					a[F]=0;
					F=-1;
					R=-1;
					printf("\n Value is removed...");
					getch();
				}
				else{
					for(i=F+1;i<=R;i++){
						if(i == R){
							a[i-1]=a[i];
							a[R]=0;
							R--;
						}
						else{
							a[i-1]=a[i];
						    }
					    }
					    printf("\n Value is Removed...");
					    getch();
				   }	    
			   }
			   else{
			   	printf("\n Queue is Empty");
			   	getch();
			   }
			break;
			case 3: if(F!=-1 && R!=-1)
			{
				printf("\n----------------");
				printf("Queue Values are : \n");
				for(i=F;i<=R;i++){
					printf("%d",a[i]);
				}
				getch();
			}
			else{
				printf("\n Queue is empty");
				getch();
			}
		    break;
		    case 4: printf("\n Program is terminating...");
		    return 0;
		    break;
			
			   
		}
	}
	return 0;
}
