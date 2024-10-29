#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    struct node *head = NULL;

    struct node *node_1 = malloc(sizeof(struct node));
    node_1->data = 3;
    node_1->next = NULL;

    head = node_1;

    struct node *node_2 = malloc(sizeof(struct node));
    node_2->data = 9;
    node_2->next = NULL;

    node_1->next = node_2;

    struct node *node_3 = malloc(sizeof(struct node));
    node_3->data = 5;
    node_3->next = NULL;

    node_3->next = head;
    head = node_3;


}