// Written by: Ibrahim Ghoneim
/*
struct node {
    int data;
    struct node *next;
};
*/

// Returns the number of occurrences of data in the list.
int list_count_occurrences(struct node *head, int data) {
    int count = 0;

    // can use head here since we don't need to keep the head of the list
    while (head != NULL) {
        if (head->data == data) {
            count++;
        }
        head = head->next;
    }
    return count;
}
