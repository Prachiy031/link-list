/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct abc
{
    int data;
    struct abc*next;
};
/*void traverasal(struct abc *temp)
{
while(temp!=NULL)
      {
          printf("%d\n",temp->data);
          temp = temp->next;
      }
}
*/
     // temp =new;
void main()
{
    int n;
    int data;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    struct abc*head,*new,*temp;
    head = (struct abc*)malloc(sizeof(struct abc));
    printf("\nEnter data:");
   scanf("%d",&data);
      head->data=data;
      head->next=NULL;
      temp = head;
      for(int i=0;i<n-1;i++)
      {
          new = (struct abc*)malloc(sizeof(struct abc));
          printf("Enter data :");
          scanf("%d",&data);
          new->data =data;
          new->next =NULL;
          temp->next =new;
          temp =temp->next;
      }
      temp =head;
      {  printf("\nLinked list is:\n");
          for(int i=0;i<n;i++)
          {
              if(temp!=NULL)
              {
               
                   printf("%d\n",temp->data);
                   temp=temp->next;
                 
              }
              
              while(temp!=NULL)
              {
                  printf("%d\n",temp->data);
                  temp=temp->next;
              }
          }
      }
}

