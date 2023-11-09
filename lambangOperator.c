#include<stdio.h>
struct Person {
	char name[50];
	int age;
};
int main()
{
	struct Person person1;
	struct Person *ptr = &person1;
	
	ptr -> age = 30;
	strcpy(ptr -> name, "John Doe");
	
	printf("Nama : %s\n", ptr -> name);
	printf("Age : %d\n", ptr -> age);

 	return 0;
}
