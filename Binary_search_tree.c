
#include <stdio.h>//Header file for input and output
#include <stdlib.h>
// Here structure is created with a name node
struct node
{
    int info;// It will represent the info part of node which is of integer type
    struct node *left;// It is a ponter of type struct which will point left node
    struct node *right;// It is a ponter of type struct which will point right node
};
// Here structure is created with a name stack
struct stack
{
    struct node *data;
    struct stack *next;
    int flag;
};
struct node *root = NULL;
struct node *createbst(struct node *, int);
struct node *preorder(struct node *);
struct node *inorder(struct node *root);
struct node *postorder(struct node *root);
static int item;
int main()
{
    int x;
    do
    {
        printf("\n----Main Menu-----\n\n");
        printf("1. Create a binary search tree\n");
        printf("2. In - order Traversal\n");
        printf("3. Pre - order Traversal\n");
        printf("4. Post - order Traversal\n");
        printf("5. Exit prom the program\n");
        printf("Enter your option\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter - 1 to terminate\n");
            printf("Enter the data item:\n");
            scanf("%d", &item);
            while (item != -1) // termination criteria
            {
                root = createbst(root, item);
                printf("Enter the data item:\n");
                scanf("%d", &item);
            }
            printf("\n**Binary tree is created**\n\n");
            break;

        case 2:
            if (root == NULL)
                printf("In - order Traversal: Binary tree is empty\n");
            else
            {
                printf("In - order Traversal\n");
                root = inorder(root);
                break;
            }
            break;
        case 3:
            if (root == NULL)
                printf("pre - order Traversal: Binary tree is empty\n");
            else
            {
                printf("\n** Pre - order Traversal **\n");
                root = preorder(root);
                break;
            }
            break;
        case 4:
            if (root == NULL)
                printf("Post - order Traversal: Binary tree is empty\n");
            else
            {
                printf("\n ** Post - order Traversal ** \n\n");
                root = postorder(root);
                break;
            }
            break;
        }
    } while (x <= 4);
}

struct node *createbst(struct node *root, int item)
{
    struct node *newnode, *ptr;
    int value;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (root == NULL)
    {
        root = newnode;
        root->info = item;
        newnode->left = NULL;
        newnode->right = NULL;
        return root;
    }
    ptr = root;
    do
    {
        if (item < ptr->info && ptr->left != NULL)
        {
            ptr = ptr->left;
            value = 1;
        }
        else if (item >= ptr->info && ptr->right != NULL)
        {
            ptr = ptr->right;
            value = 1;
        }
        else
        {
            value = 0;
        }
    } while (value == 1);
    if (item < ptr->info)
    {
        ptr->left = newnode;
    }
    else
    {
        ptr->right = newnode;
    }
    newnode->info = item;
    newnode->left = NULL;
    newnode->right = NULL;
    return root;
}

struct node *preorder(struct node *root)
{
    struct node *ptr;
    struct stack *ptr1, *top;
    ptr = root;
    top = (struct stack *)malloc(sizeof(struct stack));
    top->data = NULL;
    top->next = NULL;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->info);
        if (ptr->right != NULL)
        {
            ptr1 = (struct stack *)malloc(sizeof(struct stack));
            ptr1->data = ptr->right;
            ptr1->next = top;
            top = ptr1;
        }
        if (ptr->left != NULL)
        {
            ptr = ptr->left;
        }
        else
        {
            ptr = top->data;
            ptr1 = top;
            top = top->next;
        }
    }
    return root;
}

struct node *inorder(struct node *root)
{
    int value;
    struct node *ptr;
    struct stack *ptr1, *top;
    ptr = root;
    top = (struct stack *)malloc(sizeof(struct stack));
    top->data = NULL;
    top->next = NULL;
    do
    {
        while (ptr != NULL)
        {
            ptr1 = (struct stack *)malloc(sizeof(struct stack));
            ptr1->next = top;
            top = ptr1;
            top->data = ptr;
            ptr = ptr->left;
        }
        ptr = top->data;
        top = top->next;
        while (ptr != NULL)
        {
            printf("%d\n", ptr->info);
            if (ptr->right != NULL)
            {
                ptr = ptr->right;
                value = 1;
                break;
            }
            else
            {
                ptr = top->data;
                top = top->next;
                value = 0;
            }
        }
    } while (value == 1);
    return root;
}

struct node *postorder(struct node *root)
{
    int oper, value;
    struct node *ptr;
    struct stack *ptr1, *top;
    ptr = root;
    top = (struct stack *)malloc(sizeof(struct stack));
    top->data = NULL;
    top->next = NULL;
    do
    {
        while (ptr != NULL)
        {
            ptr1 = (struct stack *)malloc(sizeof(struct stack));
            ptr1->data = ptr;
            ptr1->next = top;
            top = ptr1;
            top->flag = 0;
            if (ptr->right != NULL)
            {
                ptr1 = (struct stack *)malloc(sizeof(struct stack));
                ptr1->data = ptr->right;
                ptr1->next = top;
                top = ptr1;
                top->flag = -1;
            }
            ptr = ptr->left;
        }
        ptr = top->data;
        oper = top->flag;
        top = top->next;
        while (oper == 0)
        {
            printf("%d\n", ptr->info);
            oper = top->flag;
            ptr = top->data;
            top = top->next;
            value = 0;
        }
        if (oper == -1)
        {
            oper = 0;
            value = 1;
        }
    } while (value == 1);
    return root;
}