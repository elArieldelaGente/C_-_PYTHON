#include <stdio.h>          /* To eliminate when all linked list implementation is finished */
#include <stdlib.h>         /* To eliminate when all linked list implementation is finished */

#ifndef NULL
    #define NULL 0
#endif

/* Creating de data type */
struct node {
    int data;
    struct node *next;
};

/* Error messages */
char *length_error_message = "Length error: The position exceeds the length of de list";

/* create_node. Creates a new node */
struct node *  create_node(int data){

    struct node* new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


int length(struct node *head){

    int count;
    struct node *temp;

    for (temp = head, count = 0; temp != NULL; count++)
        temp = temp->next;

    return count;
}

/*append.  Inserts a node at the end of the list  */
struct node* append(struct node* head, int data){

    struct node* temp;
    struct node* new_node;

    new_node = create_node(data);

    if ( head == NULL){
        head  = new_node;
    } else{
        temp = head;

        while (temp->next != NULL){
            temp = temp->next;
        }
        
        temp->next = new_node;        
    }        

    return head;    
}


struct node* front_insert(struct node* head, int data){

    struct node* new_node;
    
    new_node = create_node(data);
    new_node->next = head;
    head = new_node;

    return head;
}

struct node* insert(struct node* head, int pos, int data){

    struct node *new_node;
    struct node *temp;
    int list_length, count;

    new_node = create_node(data);
    list_length = length(head);

    if ( pos > list_length ){
        printf("%s\n", length_error_message);
        return head;
    }

    if (pos == 0){
        head = front_insert(head, data);
        return head;
    }

    count = 0;
    temp = head;
    while ( count != ( pos - 1 ) ){     /*  pos -1  to reach the exact node to insert*/
        temp = temp->next;
        count++;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return head;
}


void display_list(struct node* head){

    struct node* temp;
    int i;

    temp = head;

    for ( i = 0; temp != NULL; i++ ){
        printf("List item %d  data  ---> %d\n", i, temp->data);
        temp = temp->next;
    }

}




int main(){

    struct node* head;
    struct node* temp;
    int length(struct node*);

    head = NULL;

    head = append(head, 101);
    head = append(head, 202);
    head = insert(head, 20, 333); /* Fail. pos > list length */
    head = append(head, 303);
    head = front_insert(head, 3003);
    head = append(head, 404);
    head = append(head, 505);
    head = insert(head, 6, 20002);

    printf("Length: %d\n", length(head));
    display_list(head);
    printf("\n--------\n");

    head = front_insert(head, 1001);
    head = front_insert(head, 2002);

    printf("Length: %d\n", length(head));
    display_list(head);
    printf("\n--------\n");

    head = insert(head, 3, 10001);
    head = insert(head, 0, 30003);

    printf("Length: %d\n", length(head));
    display_list(head);
}

