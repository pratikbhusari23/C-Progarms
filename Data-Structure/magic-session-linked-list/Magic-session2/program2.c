#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node *next;
};
struct Node *head=NULL;
struct Node *createNode(){
	
	struct Node *node=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the data\n");
	scanf("%d",&node->data);
	node->next=NULL;
	return node;
}

void addNode(){
	struct Node *node=createNode();
	if(head==NULL){
		head=node;
	}
	else{
		struct Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}
int  countNode(){
	int num,index=1;
	printf("Enter the number to be searched\n");
	scanf("%d",&num);
	getchar();
	if(head==NULL){
		printf("LL is empty\n");
		return -1;
	}
	else{
		struct Node *temp=head;
		int flag=0, prev=0,curr=0;
		index=1;
		while(temp!=NULL){
		
			if(temp->data==num){
				if(flag==1){
					prev=curr;
				}
				flag=1;
				curr=index;
			}
			index++;
			temp=temp->next;
		}
		if(curr==0){
			printf("Not occured\n");
		}
		else if(prev==0){
			printf("Occured once\n");
		}
		else{
			printf("2nd last occurance is %d\n",prev);
			printf("last occurance is %d\n",curr);
		}
	}
}




void main(){
	int num;
	printf("Enter no of nodes in ll\n");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		addNode();
	}

	countNode();

}
