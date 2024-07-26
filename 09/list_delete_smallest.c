// Written by: Ibrahim Ghoneim
/*
struct node {
    int data;
    struct node *next;
};
*/

// Deletes the node with the smallest data in the list and returns the head of the new list.
struct node *list_delete_smallest(struct node *head) {

    // if there are 0 we can't delete anything
    // if there is only 1 node, then obviously it is the smallest
    // either way, we return NULL
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    
    // current will be used to traverse the list
    struct node *current = head;
    // prev will be used to keep track of the previous node of the current node
    struct node *prev = NULL;
    // smallest_prev will be used to keep track of the node before the smallest node
    struct node *smallest_prev = NULL;

    // we will assume the smallest data is the first node's data for now
    int smallest_data = head->data;
    
    // notice how we will traverse till the tail and not the NULL node
    // this is because if the tail is the smallest, we need to know the node before it
    while (current->next != NULL) {
        // if we find a smaller data, we update the smallest_data and smallest_prev
        if (current->next->data < smallest_data) {
            smallest_data = current->next->data;
            smallest_prev = current;
        }
        current = current->next;
    }
    
    // if smallest_prev is NULL, then the smallest node is the head
    // so we can just update the head to the next node
    // otherwise, using smallest_prev, we can delete the smallest node as it would
    // be the next node of smallest_prev

    struct node *delete_node;
    if (smallest_prev == NULL) {
        delete_node = head;
        head = head->next;
    } else {
        delete_node = smallest_prev->next;
        
        // you can also just say smallest_prev->next = smallest_prev->next->next;
        // but this is more readable
        smallest_prev->next = delete_node->next;
    }
    
    // notice how we have these down here and not in the if/else
    // this is because both cases will have to free the node and we don't want to repeat code
    free(current);
    return head;
}
