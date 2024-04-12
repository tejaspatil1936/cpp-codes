#include <bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    node *link;
} *start = NULL;


int main()
{
    int size, data;

    cout << "Enter the size of linked list : ";
    cin >> size;

    cout << "Enter items in ascending order : ";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        node *temp = new node;
        temp->info = data;
        temp->link = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            node *ptr;
            ptr = start;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
    node *p;
    p = start;
    while (p != NULL)
    {
        cout << p->info << "\t";
        p = p->link;
    }
    cout << endl;

    return 0;
}