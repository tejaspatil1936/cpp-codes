
// #include <iostream>
// using namespace std;

// struct node
// {
//     int info;
//     struct node *link;
// } *start = NULL;

// int main()
// {
//     int n, data;
//     cout << "Enter the size and elements of the linked list in sorted order\n";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> data;
//         node *temp = new node;
//         temp->info = data;
//         temp->link = NULL;
//         if (start == NULL)
//         {
//             start = temp;
//         }
//         else
//         {
//             node *ptr = start;
//             while (ptr->link != NULL)
//             {
//                 ptr = ptr->link;
//             }
//             ptr->link = temp;
//         }
//     }
//     cout << "Elements in the linked list are as follows (sorted):\n";
//     node *p = start;
//     while (p != NULL)
//     {
//         cout << p->info << "\t";
//         p = p->link;
//     }
//     cout << "\n";

//     // Modified code for searching an element in a sorted linked list
//     int searchValue;
//     cout << "Enter the value to search in the linked list: ";
//     cin >> searchValue;
//     p = start; // Re-use the pointer 'p' to traverse the list again

//     while (p != NULL && p->info <= searchValue)
//     {
//         if (p->info == searchValue)
//         {
//             cout << "Element " << searchValue << " is found in the list at address " << p << "." << endl;
//             return 0; // Exit the program once the item is found
//         }
//         p = p->link; // Move to the next node
//     }

//     // If after the loop, the element was not found or the loop was exited early because the search value was smaller than the current node's value
//     cout << "Element " << searchValue << " is not found in the list." << endl;

//     return 0;
// }
