#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node * next;

};

void LinkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("element is : %d \n",ptr->data);
        ptr = ptr->next;
    }
}



int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    // allocate memory for nodes in the linked list in heap

     head = (struct Node*)malloc(sizeof(struct Node));
     second = (struct Node*)malloc(sizeof(struct Node));
     third = (struct Node*)malloc(sizeof(struct Node));
     fourth = (struct Node*)malloc(sizeof(struct Node));

        // link first and second nodes

     head->data = 7;
     head->next = second;

        // link second and third nodes

     second->data = 11;
     second->next = third;

        // link the third and fourth nodes
    
    third->data = 34;
    third->next = fourth;

        // terminate the list at the fourth node

    fourth->data = 50;
    fourth->next =NULL;    

        //calling the fubction

        LinkedListTraversal(head);


    return 0;
}