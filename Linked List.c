#include<stdio.h>
#include<stdlib.h>
#include"stdtypes.h"

typedef struct node
{
    int val;
    struct node *next;
} node;

int nodelength = 0;
node head;

void AddNode(u32 data);
void print();
void delete(u32 data);
void addNodeAtIndex(u32 data, u32 index);

int main()
{
    u32 choice;
    u32 value;
    int exist = 0;
    u32 index;

    while (exist == 0)
    {
        printf("To add a node, enter 0\n");
        printf("To print the linked list, enter 1\n");
        printf("To delete a node, enter 2\n");
        printf("To add a node at a specific index, enter 3\n");
        printf("To exit, press 4\n");
        printf("Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 0:
                printf("Enter the value: ");
                scanf("%d", &value);
                AddNode(value);
                printf("Node is added. Thank you.\n\n\n");
                break;
            case 1:
                print();
                break;
            case 2:
                printf("Enter the value inside the node to delete: ");
                scanf("%d", &value);
                delete(value);
                break;
            case 3:
                printf("Enter the value of the new node: ");
                scanf("%d", &value);
                printf("Enter the index where the node should be inserted: ");
                scanf("%d", &index);
                addNodeAtIndex(value, index);
                break;
            case 4:
                exist = 1;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}

void AddNode(u32 data)
{
    if (nodelength == 0) /* Linked list is empty, add the first node (head) */
    {
        head.val = data;
        head.next = NULL;
    }
    else /* Linked list is not empty */
    {
        node *newnode = (node *)malloc(sizeof(node));
        newnode->val = data;
        newnode->next = NULL;

        node *temp = &head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    nodelength++;
}

void print()
{
    printf("\n----------------------\n");

    if (nodelength > 0)
    {
        node *temp = &head;
        u32 counter = 1;
        printf("Node Number %d = %d\n", counter, temp->val);

        while (temp->next != NULL)
        {
            counter++;
            temp = temp->next;
            printf("Node Number %d = %d\n", counter, temp->val);
        }
    }
    else
    {
        printf("List is empty\n");
    }

    printf("----------------------\n");
}

void delete(u32 data)
{
    if (nodelength == 0)
    {
        printf("List is empty. Nothing to delete.\n\n\n");
        return;
    }

    if (head.val == data) // Check if the head node holds the value to be deleted
    {
        node *temp = head.next;
        free(&head);
        head = *temp;
        nodelength--;
        printf("Node with value %d is deleted.\n\n\n", data);
        return;
    }

    node *prev = &head;
    node *curr = head.next;

    while (curr != NULL)
    {
        if (curr->val == data)
        {
            prev->next = curr->next;
            free(curr);
            nodelength--;
            printf("Node with value %d is deleted.\n\n\n", data);
            return;
        }

        prev = curr;
        curr = curr->next;
    }

    printf("Node with value %d not found in the list.\n\n\n", data);
}

void addNodeAtIndex(u32 data, u32 index)
{
	u32 counter = 1;
	
    if (index > nodelength)
    {
        printf("Invalid index. Node cannot be inserted.\n\n\n");
        return;
    }

    if (index == 0)
    {
        node *newnode = (node *)malloc(sizeof(node));
        newnode->val = data;
        newnode->next = &head;
        head = *newnode;
        nodelength++;
        printf("Node with value %d is added at index %d.\n\n\n", data, index);
        return;
    }

    node *newnode = (node *)malloc(sizeof(node));
    newnode->val = data;

    node *temp = &head;

    while (counter < index)
    {
        temp = temp->next;
        counter++;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    nodelength++;
    printf("Node with value %d is added at index %d.\n\n\n", data, index);
}