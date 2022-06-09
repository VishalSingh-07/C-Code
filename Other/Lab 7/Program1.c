// Write a Program to insert one element at the beginning of the list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
      int data;
      struct node *next;
};struct node *head;
void insert(int num)
{
      struct node *ptr=(struct node*)malloc(sizeof(struct node*));
      if(ptr==NULL)
      {
            printf("\n Overflow");
      }
      else
      {
            ptr->data=num;
            ptr->next=head;
            head=ptr;
            printf("\n Node inserted");
      }


}
int main()
{
      int choice,num;
      label:
      printf("Enter the numer which you want to insert: ");
      scanf("%d",&num);

      insert(num);
      printf("\n Enter 0: For more insertion -- ");
      scanf("%d",&choice);
      if(choice==0)
      {
            goto label;

      }

      return 0;

}