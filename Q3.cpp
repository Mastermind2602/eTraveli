// 3.Write a Java program to print the nodes present in the Circular LinkedList

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int Id;
    struct node *next;
    int co;
};
struct node *head;

void insert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter the node data : ";
        cin >> item;
        ptr->Id = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        cout << "\nNothing to print" << endl;
    }
    else
    {
        cout << "\n Printing values ..." << endl;

        while (ptr->next != head)
        {
            cout << ptr->Id << endl;
            ptr = ptr->next;
        }
        cout << ptr->Id << endl;
    }
}

int main()
{
    int n, choice = 0;
    while (choice != 3)
    {
        cout << "\n1)Insert\n2)Display\n3)Exit\nEnter option : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter number of Node : ";
            cin >> n;
            while (n != 0)
            {
                insert();
                n--;
            }
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Please enter valid choice..";
        }
    }
    return 0;
}