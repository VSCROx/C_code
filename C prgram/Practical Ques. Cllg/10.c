#include<stdio.h>
#include<string.h>

struct list{
    char name[20], city[20], state[20];
    unsigned long int zip; 
};

void add(struct list l[], int n){
    printf("Enter details for address %d\n",n+1);
    printf("Name: ");
    scanf("%s",l[n].name);
    printf("City: ");
    scanf("%s",l[n].city);
    printf("State: ");
    scanf("%s",l[n].state);
    printf("Zip: ");
    scanf("%ul",&l[n].zip);
}
void delete(struct list l[], int n, int del){
    for(int i=del-1; i<(n-1); i++)
        l[i]=l[i+1];
}
int main(){
    struct list l[10];
    int choice, i=0, j=0, x;
    do{
        printf("\n\tMenu\n1.Add address\n2.Delete address\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add(l,j);
                j++;
                break;
            case 2:
                printf("\nEnter address number to be deleted: ");
                scanf("%d",&x);
                if(x<=j){
                    delete(l,j,x);
                    j--;
                }else printf("Address doesn't exist...\n");
                break;
            case 3:
                i++;
                printf("\n.....EXIT.....");
                break;
            default:
                printf("Invalid Operation...Retry..\n");
        }
    }while(i==0);
    return 0;
}
