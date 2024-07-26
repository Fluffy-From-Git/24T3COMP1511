// Written by: Ibrahim Ghoneim
/*
struct node {
    int data;
    struct node *next;
};
*/

// Returns a copy of the list and frees the original list.
struct node *list_copy(struct node *head) {

    // Obvious checks 99% of the time with linked lists
    if (head == NULL) {
        return head;
    }

    // We will traverse the original list and copy each node to the new list
    struct node *current = head; 

    // new_head will be the head of the new list
    struct node *new_head = NULL; 

    // we will use new_tail to append to the end of the new list instead
    // of traversing the new list each time to append to the end
    struct node *new_tail = NULL; 

    // temp will be used to create new nodes
    struct node *temp;
    
    while (current != NULL) {
        temp = malloc(sizeof(struct node));
        temp->data = current->data;
        temp->next = NULL;
        
        // initial case when new_head is NULL
        // otherwise, append to the end of the new list
        if (new_head == NULL) {
            new_head = temp;
            new_tail = temp;
        } else {
            new_tail->next = temp;
            new_tail = temp;
        }
        
        current = current->next;
    }
    
    // using a lagging pointer to free the original list
    current = head;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
    
    return new_head;
}
