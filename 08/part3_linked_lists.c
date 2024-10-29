// part3_linked_lists.c
// This program was written by Sofia De Bellis (z5418801) and Ibrahim Ghoneim (z5470570)
// Program tests linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

int main(void) {

    // Create a pointer to the head of the linked list
    struct node *head = NULL;

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 10);

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 5);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 15);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 20);
    head = insert_tail(head, 1);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    
    printf("There are %d nodes in the list\n", length);

    return 0;
}