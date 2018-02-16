/*
 * 13.c
 *
 *  Created on: Feb 16, 2018
 *      Author: D
 */
#include<stdio.h>
#include<malloc.h>

struct node {
	int data;
	struct node *link;
};

int a, b, c;
struct node *START = NULL;
struct node* createNode() {
	struct node *n;
	n = (struct node*) malloc(sizeof(struct node));
	return n;
}

void insert() {
	struct node * temp, *t;
	temp = createNode();
	printf("enter data\n");
	scanf("%d", &temp->data);
	temp->link = NULL;
	if (START == NULL) {
		START = temp;
	} else {
		t = START;
		while (t->link != NULL) {
			t = t->link;
		}
		t->link = temp;
	}
}

void viewList() {
	struct node *tt;
	if (START == NULL) {
		printf("List is empty");
	} else {
		tt = START;
		while (tt != NULL) {
			printf("%d ", tt->data);
			tt = tt->link;
		}
	}
}

void logic() {
	struct node *t;
	int flag = 3;
	if (START == NULL) {
		printf("empty list");
	} else {
		t = START;
		while (t != NULL) {
			a = t->data;
			b = t->link->data;
			c = a + b;
			printf(" %d %d %d", a, b, c);
			t = t->link->link;
		}
	}
}

int menu() {
	int ch;
	printf("\n1 add ");
	printf("\n2 view ");
	printf("\n3 logic");
	printf("\n4 exit");
	scanf("%d", &ch);
	return ch;
}

int main() {
	while (1) {
		switch (menu()) {
		case 1:
			insert();
			break;
		case 2:
			viewList();
			break;
		case 3:
			logic();
			break;
		case 4:
			exit(0);
		default:
			printf("invalid \n");
		}
	}
	return 0;
}
