// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    struct node *new_node = create_node(data);

    new_node->next = head;
    return new_node;
}

struct node *insert_tail(struct node *head, int data) {
    struct node *new_node = create_node(data);
    if (head == NULL) {
        return new_node;
    }
    struct node *current_node = head;

    while (current_node->next != NULL) {
        current_node = current_node->next;
    }

    current_node = new_node;
    return head;
}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;

    // Traverse the linked list and print each node
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    if (head == NULL) {
        return 0;
    }
    int counter = 0;
    while (head != NULL) {
        counter++;
        head = head->next;
    }

    return counter;

}