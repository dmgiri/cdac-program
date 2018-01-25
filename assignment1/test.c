/*
 * test.c
 *
 *  Created on: Jan 24, 2018
 *      Author: D
 */
#include<stdio.h>

int main()
{
	char *list[6]={"jyoti","sareeta","anisha","sangita","savita","suja"};
	char *tempstr;
    int a[7],n,i,j,temp;

//copy all string lenth into array
    for(i=0;i<6;i++){
    	a[i]=strlen(list[i]);
    }

//bubble sort a[] as well as list[]
    for(i=0;i<6;i++)
        for(j=i;j<6;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                tempstr=list[i];
                printf("%s",list[i]);
                a[i]=a[j];
                list[i]=list[j];
                a[j]=temp;
               list[j]=tempstr;
            }

    printf("\nArray after sorting: ");
  
    for(i=0;i<n;++i)
        printf("%d ",a[i]);

    printf("\n");

    printf("after sorting\n");
        for(i=0;i<6;++i)
            printf("%s ",list[i]);
    return 0;
}
