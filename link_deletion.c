#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("element is --> %d\n",ptr->data);
        ptr = ptr->next ;

    }

}
// deleting the first element from the linked list
struct Node * deletionAtFirst(struct Node * head){
    
    struct Node * ptr = head ;
    head = head -> next ;
    free(ptr);
    return head;
}
// deletin a node in between 
struct Node * delete_At_index(struct Node * head ,int index){
    struct Node * p=head ;
    struct Node * q = head -> next ;
    for(int i = 0;i<index-1;i++){
        p= p->next;
        q = q-> next;
    }

    p->next = q->next;
    free (q);
    return head;

}
// delete the last node 
struct Node * deleteLast(struct Node * head){
    struct Node * p = head ;
    struct Node * q = head -> next ;
    while(q->next != NULL){
        p = p->next;
        q = q-> next;
    }

    p->next = NULL;
    free(q);
    return head;

}
// deleting a node with a given value
struct Node * delete_value(struct Node * head ,int value){
    struct Node * p=head ;
    struct Node * q = head -> next ;
    while(q-> data != value && q->next!=NULL){
        p= p->next;
        q = q-> next;
    }

    if(q->data == value){
        p->next =q->next;
        free(q);
    }
    return head;

}




int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth ;

    fourth->data = 9;
    fourth->next = NULL;
 
    printf("before deletion :\n");
    LinkedListTraversal(head);
    
    /*head = deletionAtFirst(head);
    printf("after deletion\n");
    LinkedListTraversal(head);*/

    /* delete_At_index(head,2);
        printf("after deleting at index\n");
    LinkedListTraversal(head); */

   /* deleteLast(head);
    printf("after deleting last element :\n");
    LinkedListTraversal(head);*/

    /*delete_value(head,11);
    printf("after deleting the value \n");
    LinkedListTraversal(head);*/

    return 0;
}