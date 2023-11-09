#include <iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *link;
} nd;

nd *start = NULL;

void listCreate(void);
void display(void);
nd *search(int);
void insertAfter(void);

int main()
{

    int check, x;
    nd *temp;
    do
    {
        cout << "\n\n ------ Menu ------\n";
        cout << "Press 1: Create Linked List" << endl;
        cout << "Press 2: Display Linked List" << endl;
        cout << "Press 3: Search Data" << endl;
        cout << "Press 4: Insertion data after a node" << endl;
        cout << "-----------------------------\n\n";
        cout << "Enter your option: " << endl;
        cin >> check;

        switch (check)
        {
        case 1:
            listCreate();
            break;
        case 2:
            display();
            break;
        case 3:
        {
            cout << "Enter the data to be searched: ";
            cin >> x;
            temp = search(x);
            if (temp)
            {
                cout << "Data found...";
            }
            else
            {
                cout << "Data not Found...";
            }
            break;
        }
        case 4:
            insertAfter();
            break;

        default:
            cout << "Have a good day!" << endl;
            break;
        }

    } while (check != 0);

    return 0;
}

void listCreate(void)
{
    nd *ptr;
    char ch;
    ptr = (nd *)malloc(sizeof(nd));
    start = ptr;
    cout << "Enter the data to store: ";
    cin >> ptr->data;
    cout << "Do you want to store more data? (Y/N) ";
    fflush(stdin);
    cin >> ch;

    while (ch == 'Y')
    {
        ptr->link = (nd *)malloc(sizeof(nd));
        ptr = ptr->link;
        cout << "Enter the data to store: ";
        cin >> ptr->data;
        cout << "Do you want to store more data? (Y/N) ";
        fflush(stdin);
        cin >> ch;
    }
    ptr->link = NULL;
}

void display(void)
{
    nd *ptr;
    ptr = start;
    cout << "Head->";
    while (ptr)
    {
        cout << " " << ptr->data;
        ptr = ptr->link;
    }
    cout << "\n";
}

nd *search(int x)
{
    nd *ptr;
    ptr = start;
    while (ptr)
    {
        if (ptr->data == x)
        {
            return (ptr);
        }
        else
        {
            ptr = ptr->link;
        }
    }
    return (ptr);
}

void insertAfter(void)
{
    nd *ptr, *newnode;
    int x;
    ptr = start;
    cout << "Enter the value after which you want to insert?  ";
    cin >> x;
    newnode = (nd *)malloc(sizeof(nd));
    cout << "Enter the data of new Node: ";
    cin >> newnode->data;
    ptr = search(x);
    newnode->link = ptr->link;
    ptr->link = newnode;
}