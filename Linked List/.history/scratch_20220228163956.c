#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
} *start;

void createList (int n);
void traverseList ();
void alternate();
int main ()
{
  int n;
  printf ("enter the no of nodes-");
  scanf ("%d", &n);

  
}




void createList(int n)

{
  struct node *new, *ptr, *p, *c;
  int data;

  start = (struct node *) malloc (sizeof (struct node));
  
  printf ("enter the data of first node-");
  scanf ("%d", &data);

  start->data = data;
  start->link = NULL;
  ptr = start;
  for ( int i = 2; i <= n; i++)
    {
      new = (struct node *) malloc (sizeof (struct node));

    

      printf ("enter data in nodes");
      scanf ("%d", &data);

      new->data = data;
      new->link = NULL;
      ptr->link = new;
      ptr = ptr->link;
    }


    p=start;
    c=p->link;

    while (p!=NULL && c!=NULL)
    {
      p->link=c->link;
      free(c);
      p=p->link;
      c=p->link;

    }

}

void traverseList ()
{
  struct node *ptr;
  if (start == NULL)
    {
      printf ("list is empty\n");
      return;

    }
  ptr = start;
  while (ptr != NULL)
    {
      printf ("Data = %d\n", ptr->data);
      ptr = ptr->link;
    }

}