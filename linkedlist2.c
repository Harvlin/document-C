#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
void tambahNode (struct Node **head, int newData) {
	struct Node	*newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL) {
		printf("Alokasi memori gagal\n");
		exit(1);
	}
	newNode -> data = newData;
	newNode -> next = *head;
	*head = newNode;
}
void tampilkanList(struct Node *node) {
	while (node != NULL) {
		printf("%d ->", node -> data);
		node = node -> next;
	}
	printf("NULL\n");
}
int main()
{
	struct Node *head = NULL;
	tambahNode(&head, 2500);
	tambahNode(&head, 6000);
	tambahNode(&head, 3000);
	tambahNode(&head, 3545);
	printf("LinkedList: ");
	tampilkanList(head);
 	return 0;
}
