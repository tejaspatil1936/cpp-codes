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
    cout << "Enter the size of Linked List : ";
    cin >> size;


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
    node *i = start;
    while (i != NULL)
    {
        cout << i->info << " ";
        i = i->link;
    }
    cout << endl;

    int item;
    cout << "Enter the element you want to search : ";
    cin >> item;

    node *PTR = start;
    node *loc;
    while (PTR != NULL)
    {
        if (PTR->info == item)
        {
            loc = PTR->link;
            cout << "found at : " << loc << endl;
            return 0;
        }
        else
        {
            PTR = PTR->link;
        }
    }

    loc = NULL;
    cout << "not found" << endl;

    return 0;
}
