// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(){
    int n;
    struct node *newnode;
    struct node *temp=head;
    printf("enter the no of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            newnode=malloc(sizeof(struct node));
            printf("Enter the data:");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else {
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
}
void insertAtBeg(){
    struct node *newnode;
    struct node *temp;
    newnode=malloc(sizeof(struct node));
    printf("Enter the  new node:");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        temp=head;
        head=newnode;
        newnode->next=temp;
    }
}
void insertAtEnd(){
    struct node *temp=head;
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void insertAtPos(){
    int pos;
    struct node *temp=head;
    printf("Enter a position:");
    scanf("%d",&pos);
    if(pos == 1)
    {
        insertAtBeg();
        return;
    }
        if(pos < 1)
    {
        printf("Invalid position!\n");
        return;
    }
    if(head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
        if(temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    for(int i=1; i<pos-1&& temp != NULL; i++)
    temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
}
void deleteFromBeg(){
    struct node *temp=head;
    if(head==NULL){
        printf("The list is empty!");
    }
    else{
    head=head->next;
    free(temp);
    }
}
void deleteFromEnd(){
    struct node *temp=head;
    if(head==NULL){
        printf("The list is empty!");
    }
    else if(head->next == NULL)
{
    free(head);
    head = NULL;
}
else{
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}}
void deleteFromPos(){
    int pos;
    struct node *temp=head;
    printf("Enter a position:");
    scanf("%d",&pos);
    if(pos == 1)
    {
        deleteFromBeg();
        return;
    }
        if(pos < 1)
    {
        printf("Invalid position!\n");
        return;
    }
            if(head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
        if(temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }
    }
    struct node *del;
    del = temp->next;
    temp->next = temp->next->next;
    free(del);
}
void search(){
    int key,pos=1;
    struct node *temp=head;
    if(head==NULL){
        printf("The list is empty!");
        return;
    }
    printf("Enter a key value:");
    scanf("%d",&key);
    while(temp!=NULL){
        if(temp->data==key){
            printf("Element Found at position %d!",pos);
            return;
        }
    temp=temp->next;
    pos++;
    }     
            printf("Element Not found!");
}
void display(){
    struct node *temp=head;
    if(temp==NULL){
        printf("List is empty...\n");
    }
    else{
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    }
}
int main() {
    int ch;
    while(1){
printf("\nMENU\n1.Create\n2.InsertAtBeg\n3.InsertAtEnd\n4.InsertAtPos\n5.Delete From Beginning\n6.Delete From End\n7.Delete From Position\n8.Search\n9.Display\n10.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
                   break;
            case 2:insertAtBeg();
                   break;
            case 3:insertAtEnd();
                   break;
            case 4:insertAtPos();
                   break;
            case 5:deleteFromBeg();
                   break;
            case 6:deleteFromEnd();
                   break;
            case 7:deleteFromPos();
                   break;
            case 8:search();
                   break;
            case 9:display();
                   break;
            case 10:exit(0);
            default:printf("Invalid choice!");
        }
    }
    return 0;
}