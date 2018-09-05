#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(struct node *top, int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    while (top->next != NULL)
    {
        top = top->next;
    }
    top->next = temp;
}

void popStack(struct node *top)
{
    while(top->next->next != NULL)
    {
        top = top->next;
    }
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = top->next;
    top->next = NULL;
    free(temp);
}
void print(struct node *top)
{
    while(top != NULL)
    {
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}

int main()
{
    struct node *top = NULL;
    int studentTotal;
    int size_of_Team;
    int validmember = 0;

    cin >> students >> size_of_Team;
    int studentRate[studentTotal];
    for (int a = 0; a < studentTotal; a++)
    {
        cin >> studentRate[a];
    }

    for (int p = 0; p < studentTotal-1; p++)
    {
        for (int q = p+1; q < studentTotal; q++)
        {
            if (studentRate[p] == studentRate[q])
            {
                studentRate[q] = 0;
            }
        }
    }
    for (int x = 0; x < studentTotal; x++)
    {
        if (studentRate[x] != 0 )
        {
            if (top == NULL)
            {
                top = (struct node*)malloc(sizeof(struct node));
                top->next = NULL;
                top->data = x+1;
                validMember++;
            }
            else
            {
                push(top,x+1);
                validMember++;
            }
        }
    }
    if (validMember >= size_of_team)
    {
        cout << "YES" << endl;
        if (validmember > size_of_team)
        {
            for (int hj = 0; hj < validmember-size_of_Team; hj++)
            {
                popStack(top);
            }
        }
        print(top);
    }
    else
    {
        cout << "NO";
    }
    return 0;
