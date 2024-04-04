#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node *link;
} *start = NULL;
int main()
{
    int n, data;
    struct node *ptr;
    cout << "Enter the size and elements of the linked list\n";
    cin >> n;
    int i = 0;
    do
    {
        cin >> data;
        struct node *temp = new struct node;
        temp->info = data;
        temp->link = NULL;
        if (start == NULL)
            start = temp;
        else
        {
            ptr = start; 
            while (ptr->link != NULL)
                ptr = ptr->link;
            ptr->link = temp;
        }
        i++;
    } while (i < n);
    cout << "Elements in the linked list are as follows:\n";
    struct node *p;
    p = start;
    while (p != NULL)
    {
        cout << p->info << "\t";
        p = p->link;
    }
    cout << "\n";
    return 0;
}