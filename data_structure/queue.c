#include <stdio.h>
#include <stdlib.h>

# define SUCCESS 1
# define FAILURE 0
# define QUEUESIZE 5


int isEmpty(int front);
int isFull(int rear);
int enqueue(int queue[], int *front, int *rear, int value);
int dequeue(int queue[], int *front, int *rear);
void displayQueue(int queue[], int front, int rear);

int isEmpty(int front)
{
    return (front == -1) ? SUCCESS : FAILURE;
}


int isFull(int rear)
{
    return (rear == QUEUESIZE - 1) ? SUCCESS : FAILURE;
}


int enqueue(int queue[], int *front, int *rear, int value)
{
    if (isFull(*rear)) 
    {
        printf("\nQueue Overflow\n");
        return FAILURE;
    }

    if (*front == -1) 
        *front = 0;

    *rear += 1;
    queue[*rear] = value;

    return SUCCESS;
}


int dequeue(int queue[], int *front, int *rear)
{
    if (isEmpty(*front)) 
    {
        printf("\nQueue Underflow\n");
        return FAILURE;
    }

    int dequeuedValue = queue[*front];
    

    if (*front == *rear) 
    {
        *front = *rear = -1;
    } 
    else 
    {
        *front += 1;
    }

    return dequeuedValue;
}


void displayQueue(int queue[], int front, int rear)
{
    if (isEmpty(front)) 
    {
        printf("\nThe queue is empty\n");
    } 
    else 
    {
        printf("\nThe items in the queue are:\n");
        for (int counter = front; counter <= rear; counter++) 
        {
            printf("%d ", queue[counter]);
        }
        printf("\n");
    }
}

int main()
{
    int queue[QUEUESIZE];
    int front = -1, rear = -1;
    int ch, item;

    while (1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(queue, &front, &rear, item);
                break;
            case 2:
                dequeue(queue, &front, &rear);
                break;
            case 3:
                displayQueue(queue, front, rear);
                break;
            case 4:
                exit(0);
        }
    }

    return EXIT_SUCCESS;
}

