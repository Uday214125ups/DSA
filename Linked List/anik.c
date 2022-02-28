#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
} *start;

void createList (int n);
void traverseList ();
int
main ()
{
  int n;
  printf ("enter the no of nodes-");
  scanf ("%d", &n);

  createList (n);
  printf ("\ndata in the list\n");
  traverseList ();
  return 0;
}

void createList(int n)

{
  struct node *new, *ptr;
  int data, i;

  start = (struct node *) malloc (sizeof (struct node));
  if (start == NULL)
    {
      printf ("memory can't be allocated");
      exit (0);
    }
  printf ("enter the data of first node-");
  scanf ("%d", &data);

  start->data = data;
  start->link = NULL;
  ptr = start;
  for (i = 2; i <= n; i++)
    {
      new = (struct node *) malloc (sizeof (struct node));

      if (new == NULL)
	{
	  printf ("unable to give memory");
	  break;
	}

      printf ("enter data in nodes");
      scanf ("%d", &data);

      new->data = data;
      new->link = NULL;
      ptr->link = new;
      ptr = ptr->link;
    }
}

void
traverseList ()
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