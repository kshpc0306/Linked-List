#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data; //first four bytes of node is for data part
    struct Node* next; //next four bytes of node is for link part
};
struct Node* head; // head is variable which holds address of first element in the list
void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x; //data part
    temp->next = head; // link part
    head = temp; //first memory that is allocated to temp is stored in head
}
void Print()
{
    struct Node* temp = head; //assigning address of head to temp for traversing
    printf("List is: ");
    while(temp!=NULL) //if there is no element in the list then it never traverses
    {
        printf("%d", temp->data); //printing data part from each node
        temp = temp->next; //traversing condition
    }
    printf("\n");
}
int main()
{
	head = NULL;// program starts from main method -> here head is initialized with NULL
	printf("How many nodes?\n");// total number of nodes in the linked list
	int n, i, x;
	scanf("%d",&n);// inserting total number of nodes in the linked list
	for(i=0; i<n; i++)
	{
	    printf("Enter the number \n");
	    scanf("%d", &x);
	    Insert(x);
	    Print();
	}
}
