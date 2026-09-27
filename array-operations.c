#include<stdio.h>
#include<stdlib.h>
int insert(int a[],int n){
    int pos,value;
    printf("Enter the position of element you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert: ");
    scanf("%d",&value);
    if(n == 10)
{
    printf("Array is full");
    return n;
}

if(pos < 1 || pos > n+1)
{
    printf("Invalid position");
    return n;
}
    for(int i=n-1;i>=pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=value;
    return n+1;
}
int delete(int a[],int n){
    int value;
    printf("Enter the element you want to delete: ");  
    scanf("%d",&value);
    for(int i=0;i<n;i++)
    {
         if(a[i]==value){
             for(int j=i;j<n-1;j++){
               a[j]=a[j+1];
              
         }     return n-1;
    }
    }
    printf("Element not found");
    return n;
} 
void display(int a[],int n){
    int i;
    printf("Elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[10],i,n,ch;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    while(1){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: n=insert(a,n);
                    break;
            case 2: n=delete(a,n);
                    break;
            case 3: display(a,n);
                    break;
            case 4: exit(0);
                    break;
            default: printf("Invalid choice");
                     break;
        }
    }
    return 0;
}