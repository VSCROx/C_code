#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void display();
void Qinsert(int);
void Qdelete();
int main(){
    int n, choice; 
    do{
        printf("\n\nQueue Menu\t1.Add\t2.Remove\t3.Display\t0.Exit");
        printf("\nEnter choice 0-3: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\nEnter number: ");
                scanf("%d",&n);
                Qinsert(n);
                break;
            case 2:
                Qdelete();
                break;
            case 3:
                display();
                break;    
        }   
    }while(choice !=0);
}

void Qinsert(int item){
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = item;
    temp->next = NULL;
    if(rear == NULL){
        front = temp;
        rear = temp;
    }else{
        rear->next = temp;
        rear = rear->next;
    }
}

void display(){
    struct Node *temp = front;
    printf("\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void Qdelete(){
    if(front == NULL){
        printf("\n\nQueue is empty\n");
    }else{
        struct Node *temp = front;
        front = front->next;
        printf("\n\n%d deleted",temp->data);
        free(temp);
    }
}

