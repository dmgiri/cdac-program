
/*
 * 7.c
 *
 *  Created on: Feb 15, 2018
 *      Author: D
 */
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *prev, *next;
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


void viewListByStart(){
    struct node * t;
    if(start==NULL){
        printf("Empty");
    }
    else{
        t=start;
        while(t->next!=NULL){
            printf("%d ",t->data);
            t=t->next;
        }
    }
}

void viewListByback(){
    struct node * t;
    if(start==NULL){
        printf("Empty");
    }
    else{
        t=start;
        while(t->next!=NULL){
            t=t->next;
        }
        while(t->prev!=NULL){
            printf("%d ",t->data);
            t=t->prev;
        }
    }
}

int menu(){
    int ch;
    printf("\n1 insert node at last");
    printf("\n2 view from start");
    printf("\n3 view from last");
    printf("\n4 exit");
    scanf("%d",&ch);
    return ch;
}

int main(){
    while(1){
        switch(menu()){
            case 1:insertLastNode();
            break;
            case 2:viewListByStart();
            break;
            case 3: viewListByback();
            break;
            case 4: exit(0);
            default: printf("invalid option \n");
        }
    }
     return 0;
}


