#include<stdio.h>
#include<stdlib.h>
int push(struct node **s, int nilai);
int pop(struct node **s);
struct node {
	int data;
	struct node *p;
};
void push(struct node **s, int nilai) {
	struct node *temp;
	temp = (struct *node) malloc (sizeof(struct node));
	temp -> data = nilai;
	temp -> p = *s;
	*s = temp;
}
int pop(struct node **s) {
	struct node *temp;
	int nilai;
	if (*s != NULL) {
		temp = *s;
		nilai = temp -> data;
		*s = temp -> p;
		free(temp);
		return nilai;
	} else {
		return 1;
	}
}
int main()
{
	struct node *palingAtas;
	palingAtas = NULL;
	push(&palingAtas, 10);
	push(&palingAtas, 20);
	push(&palingAtas, 30);
	push(&palingAtas, 40);
	
	while (palingAtas != NULL) {
		printf("%d\n", pop(&palingAtas));
		palingAtas = palingAtas -> p;
	}
 	return 0;
}
