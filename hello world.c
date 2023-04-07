#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
int main()
{
    struct node *newnode,*start,*ptr;
    int num;
    printf("Enter -1 to end\n");
    printf("Enter the Data : \n");
    scanf("%d",&num);
    while(num!=-1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=num;
        if(start==NULL)
        {
            newnode->next=NULL;
            start=newnode;

        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
                newnode->next=NULL;
        }


        printf("%d\n",num);  }
}
