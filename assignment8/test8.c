
/*
 * 8.c
 *
 *  Created on: Feb 15, 2018
 *      Author: D
 */
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * prev, * next;
};

struct node * start=NULL;
struct node * createNode(){
    struct node * n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
};

void insertLastNode(){
    struct node *p,*t;
    p=createNode();
    printf("enter data\n");
    scanf("%d",&p->data);
    p->next=NULL;
    if(start==NULL){
        p->prev=NULL;
        start=p;
    }
    else{
        t=start;
        while(t->next!=NULL){
            t=t->next;
        }
         p->prev=t;
         t->next=p;
    }
}


void viewList(){
    int c=0;
    struct node * t;
    if(start==NULL){
        printf("Empty");
        c++;
    }
    else{
        t=start;
        while(t->next!=NULL){
                c++;
            printf("%d ",t->data);
            t=t->next;
        }
    }
    printf("\n total number of nodes are %d",c);
}

int menu(){
    int ch;
    printf("\n1 insert node at last");
    printf("\n2 view with total nodes ");
    printf("\n3 exit");
    scanf("%d",&ch);
    return ch;
}

int main(){
    while(1){
        switch(menu()){
            case 1:insertLastNode();
            break;
            case 2:viewList();
            break;
            case 3: exit(0);

            default: printf("invalid option \n");
        }
    }
     return 0;
}
