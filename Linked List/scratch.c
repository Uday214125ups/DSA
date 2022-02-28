#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *point;
} *start;




void createList(int n)

{
  struct node *new, *ptr, *p, *c;
  int data;

  start = (struct node *) malloc (sizeof (struct node));
  
  printf ("enter the data of first node:-");
  scanf ("%d", &data);

  start->data = data;
  start->point = NULL;
  ptr = start;
  for ( int i = 2; i <= n; i++)
    {
      new = (struct node *) malloc (sizeof (struct node));

    

      printf ("enter data in nodes");
      scanf ("%d", &data);

      new->data = data;
      new->point = NULL;
      ptr->point = new;
      ptr = ptr->point;
    }


    p=start;
    c=p->point;

    while (p!=NULL && c!=NULL)
    {
      p->point=c->point;
      free(c);
      p=p->point;
      if (p!=NULL)
      c=p->point;

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
      ptr = ptr->point;
    }

}

int main ()
{
  int n;
  printf ("enter the no of nodes-");
  scanf ("%d", &n);
  createList(n);
  traverseList();

  
}

