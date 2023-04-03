#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/* 10
	   listint_t *head;

	   head = NULL;
	   add_nodeint_end(&head, 0);
	   add_nodeint_end(&head, 1);
	   add_nodeint_end(&head, 2);
	   add_nodeint_end(&head, 3);
	   add_nodeint_end(&head, 4);
	   add_nodeint_end(&head, 98);
	   add_nodeint_end(&head, 402);
	   add_nodeint_end(&head, 1024);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 5);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   printf("-----------------\n");
	   delete_nodeint_at_index(&head, 0);
	   print_listint(head);
	   return (0);
	 */
	/* 9 */
	/*
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 9, 4096);
	print_listint(head);
	free_listint2(&head);
	return (0);
	*/
	/* 8 */
	/*
	   listint_t *head;
	   int sum;

	   head = NULL;
	   add_nodeint_end(&head, 0);
	   add_nodeint_end(&head, 1);
	   add_nodeint_end(&head, 2);
	   add_nodeint_end(&head, 3);
	   add_nodeint_end(&head, 4);
	   add_nodeint_end(&head, 98);
	   add_nodeint_end(&head, 402);
	   add_nodeint_end(&head, 1024);
	   sum = sum_listint(head);
	   printf("sum = %d\n", sum);
	   free_listint2(&head);
	   return (0);
	 */
	/* 7 */
/*	
	   listint_t *head;
	   listint_t *node;

	   head = NULL;
	   add_nodeint_end(&head, 0);
	   add_nodeint_end(&head, 1);
	   add_nodeint_end(&head, 2);
	   add_nodeint_end(&head, 3);
	   add_nodeint_end(&head, 4);
	   add_nodeint_end(&head, 98);
	   add_nodeint_end(&head, 402);
	   add_nodeint_end(&head, 1024);
	   print_listint(head);
	   node = get_nodeint_at_index(head, 7);
	   printf("%d\n", node->n);
	   print_listint(head);
	   free_listint2(&head);
	   return (0);
*/	 
	/* 6 */
			
			listint_t *head;
			int n;

			head = NULL;
			add_nodeint_end(&head, 0);
			add_nodeint_end(&head, 1);
			add_nodeint_end(&head, 2);
			add_nodeint_end(&head, 3);
			add_nodeint_end(&head, 4);
			add_nodeint_end(&head, 98);
			add_nodeint_end(&head, 402);
			add_nodeint_end(&head, 1024);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			n = pop_listint(&head);
			printf("- %d\n", n);
			print_listint(head);
			free_listint2(&head);
			printf("%p\n", (void *)head);
			return (0);
	  /* 5	
			 listint_t *head;

			 head = NULL;
			 add_nodeint_end(&head, 0);
			 add_nodeint_end(&head, 1);
			 add_nodeint_end(&head, 2);
			 add_nodeint_end(&head, 3);
			 add_nodeint_end(&head, 4);
			 add_nodeint_end(&head, 98);
			 add_nodeint_end(&head, 402);
			 add_nodeint_end(&head, 1024);
			 print_listint(head);
			 free_listint2(&head);
			 printf("%p\n", (void *)head);
			 return (0);
		    */
	/* 4
	   listint_t *head;

	   head = NULL;
	   add_nodeint_end(&head, 0);
	   add_nodeint_end(&head, 1);
	   add_nodeint_end(&head, 2);
	   add_nodeint_end(&head, 3);
	   add_nodeint_end(&head, 4);
	   add_nodeint_end(&head, 98);
	   add_nodeint_end(&head, 402);
	   add_nodeint_end(&head, 1024);
	   print_listint(head);
	   free_listint(head);
	   head = NULL;
	   return (0);
	 */
	/*
	   listint_t *head;

	   head = NULL;
	   add_nodeint_end(&head, 0);
	   add_nodeint_end(&head, 1);
	   add_nodeint_end(&head, 2);
	   add_nodeint_end(&head, 3);
	   add_nodeint_end(&head, 4);
	   add_nodeint_end(&head, 98);
	   add_nodeint_end(&head, 402);
	   add_nodeint_end(&head, 1024);
	   print_listint(head);
	   return (0);
	 */
	/*
	   listint_t *head;

	   head = NULL;
	   add_nodeint(&head, 0);
	   add_nodeint(&head, 1);
	   add_nodeint(&head, 2);
	   add_nodeint(&head, 3);
	   add_nodeint(&head, 4);
	   add_nodeint(&head, 98);
	   add_nodeint(&head, 402);
	   add_nodeint(&head, 1024);
	   print_listint(head);
	   return (0);
	 */
	/*
	   listint_t *head;
	   listint_t *new;
	   listint_t hello = {8, NULL};
	   size_t n;

	   head = &hello;
	   new = malloc(sizeof(listint_t));
	   if (new == NULL)
	   {
	   printf("Error\n");
	   return (1);
	   }
	   new->n = 9;
	   new->next = head;
	   head = new;
	   n = listint_len(head);
	   printf("-> %lu elements\n", n);
	   free(new);
	   return (0);
	 */
	/*
	   listint_t *head;
	   listint_t *new;
	   listint_t hello = {8, NULL};
	   size_t n;

	   head = &hello;
	   new = malloc(sizeof(listint_t));
	   if (new == NULL)
	   {
	   printf("Error\n");
	   return (1);
	   }
	   new->n = 9;
	   new->next = head;
	   head = new;
	   n = print_listint(head);
	   printf("-> %lu elements\n", n);
	   free(new);
	   return (0);
	 */
}
