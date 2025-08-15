#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("element is : %d \n",ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(struct Node * head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;

}

struct Node *insertAtIndex(struct Node * head,int data,int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i=0;
    while(i!= index-1){
        p = p-> next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}

struct Node *insertAtEnd(struct Node* head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
p->next = ptr;
ptr -> next = NULL;
return head;

}

struct node *insertAfterNode(struct Node * head,struct Node *previous_Node,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = previous_Node->next;
    previous_Node->next = ptr;

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


      head->data = 7;
     head->next = second;

        // link second and third nodes

     second->data = 11;
     second->next = third;

        // link the third and fourth nodes
    
    third->data = 15;
    third->next = fourth;

        // terminate the list at the fourth node

    fourth->data = 13;
    fourth->next =NULL;    

        //calling the function
 
        LinkedListTraversal(head);
        
        printf("after insertion at first\n");
        head = insertAtFirst(head,69);
        LinkedListTraversal(head);

        printf("after insertion at index\n");
        head = insertAtIndex(head,66,1);
        LinkedListTraversal(head);

        printf("after insertion at end\n");
        insertAtEnd(head,77);
        LinkedListTraversal(head);

        printf("insertion after node\n");
        insertAfterNode(head,third,42);
        LinkedListTraversal(head);

    return 0;
}