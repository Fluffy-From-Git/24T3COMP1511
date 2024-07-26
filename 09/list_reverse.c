// Written by: Ibrahim Ghoneim
/*
struct node {
    int data;
    struct node *next;
};
*/

// Returns a new list that is the reverse of the original list.
struct node *list_reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head
    struct node *next = NULL;

    // cool pattern to reverse a linked list
    // RHS becomes the LHS of the next line
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    // remember to return prev as current and next are NULL
    return prev;
}
