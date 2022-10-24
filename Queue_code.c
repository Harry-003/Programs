

#include <stdio.h> //Header file for input and output
#include <stdlib.h>
// Here structure is created with a name node
struct node
{
    int info;          // It will represent the info part of node which is of integer type
    struct node *link; // It is a ponter of type struct which will point the next node
};
void linkqinsert();  // linkqinsert function is declared
void linkqdelete();  // linkqdelete function is declared
void linkqdisplay(); // linkqdisplay function is declared
static int item;
struct node *front = NULL;
struct node *rear = NULL;
int main()
{
    int choice;
    printf("\n**C Program to perform several operation on the queue using linked list**\n\n");
    while (1)
    {
        printf("\n1.To Insert Element to the queue\n");
        printf("2.To Delete an Element from the queue\n");
        printf("3.To Display all the Elements of queue\n");
        printf("4.To Exit from the Program\n\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            linkqinsert();
            break;
        case 2:
            linkqdelete();
            break;
        case 3:
            linkqdisplay();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
            break;
        }
    }
    return 0;
}
// linkqinsert() operation on a queue to insert element in the queue
void linkqinsert()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node)); // Giving memory to newnode
    if (newnode == NULL)                                  // If avail list is full then no memory will be allocated
    {
        printf("Overflown\n");
    }
    else
    {
        printf("Enter value of Item you want to insert\n");
        scanf("%d", &item);
        newnode->info = item;
        if (front == NULL) // for the first node when the queue is empty
        {
            front = newnode; // initializing front
            rear = newnode;  // initializing rear
            front->link = NULL;
            rear->link = NULL;
        }
        else
        {
            rear->link = newnode; // add newnode
            rear = newnode;       // making the newnode as rear
            rear->link = NULL;
        }
    }
    printf("**Item inserted successfully**\n\n");
}
// linkqdelete() operation on a queue to delete elements from the queue
void linkqdelete()
{
    struct node *temp; // it is used to free the first node after deleting
    temp = front;
    if (temp == NULL)
    {
        printf("underflown\n");
    }
    else if (front->link != NULL)
    {
        front = front->link; // advance front to the next node
        item = front->info;
        free(temp);
    }
    else
    {
        item = front->info;
        front = NULL;
        rear = NULL;
        free(temp);
    }
    printf("**Item Deleted Successfully**\n\n");
}
// linkqdispaly() to display all the elements of the queue
void linkqdisplay()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("underflown\n");//queue is empty
    }
    else
    {
        printf("**Displaying all the Item in Queue**\n\n");
        while (temp != NULL)
        {
            printf("Item in the Queue is : %d\n", temp->info);
            temp = temp->link;
        }
    }
}
