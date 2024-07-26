// Written by: Ibrahim Ghoneim
/*
struct node {
    int data;
    struct node *next;
};
*/

// Appends the second list to the end of the first list and returns the head of the new list.
struct node *list_append(struct node *head1, struct node *head2) {
    // !head1 is equivalent to head1 == NULL
    if (!head1) return head2;
    struct node *current = head1;

    // Loop to the last node in the first list 
    // Notice how we are using current->next != NULL instead of current != NULL
    // This is because we want to stop at the last node, not the NULL node
    while (current->next != NULL) {
        current = current->next;
    }

    // current is the tail of the first list
    // so saying current->next = head2 will append the second list to the end of the first list
    current->next = head2;

    // we used a current pointer to traverse the first list as to not lose the head of the first list
    return head1;
}
