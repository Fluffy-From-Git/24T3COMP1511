// Written by: Ibrahim Ghoneim
/*
struct node {
    int data;
    struct node *next;
};
*/

// Returns -1 if both lists have an even number, 1 if only one list has an even number, and 0 if neither list has an even number.
int list_evens(struct node *head1, struct node *head2) {
    // two flags to check if we found an even number in each list
    int found1 = 0;
    int found2 = 0;
    while (head1 != NULL) {
        if (head1->data % 2 == 0) {
            found1 = 1;
            // early break since we only need to know if there is an even number
            break;
        }
        head1 = head1->next;
    }

    while (head2 != NULL) {
        if (head2->data % 2 == 0) {
            // early break since we only need to know if there is an even number
            found2 = 1;
            break;
        }
        head2 = head2->next;
    }

    if (found1 && found2) {
        return -1;
    }
    
    if ( found1 || found2) {
        return 1;
    }
    
    return 0;

}
