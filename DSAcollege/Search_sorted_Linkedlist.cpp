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
    cout << "enter the size of linked list : ";
    cin >> size;
    cout << "enter the elements of Linked List in decending order : ";

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

    int ITEM;
    node *loc;
    cout << "enter the item you want to search : ";
    cin >> ITEM;
    node *PTR = start;

    while (PTR != NULL)
    {
        if (ITEM < PTR->info)
        {
            PTR = PTR->link;
        }
        else if (ITEM == PTR->info)
        {
            loc = PTR;
            cout << "Found at : " << loc << endl;
            return 0;
        }
        else
        {
            loc = NULL;
            cout << "No. is bigger " << endl;
            return 0;
        }
    }

    loc = NULL;
    cout << "no does not exist" << endl;
    return 0;
}
