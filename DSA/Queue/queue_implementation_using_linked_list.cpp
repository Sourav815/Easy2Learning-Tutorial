#include <iostream>

using namespace std;
typedef struct qu
{
    int data;
    struct qu *link;
} queue;

queue *front = NULL;
queue *rare = NULL;

void insert();
void create();
int Delete(void);
void display(void);

int main()
{

    int ch, val;

    do
    {
        cout << "\n\n ------ Menu ------\n";
        cout << "Press 1: Create" << endl;
        cout << "Press 2: Insert Again" << endl;
        cout << "Press 3: Delete" << endl;
        //Home task to search a value 
        cout << "Press 4: Display" << endl;
        cout << "-----------------------------\n\n";
        cout << "Enter your option: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            val = Delete();
            if (val != -1)
            {
                cout << "Deleted Value: " << val << endl;
            }
            break;
        // case 3:
        //     val = peek();
        //     if (val != -1)
        //     {
        //         cout << "Top-> " << val << endl;
        //     }
        //     break;
        case 4:
            display();
            break;

        default:
            cout << "\nHave a nice day!\n";
            break;
        }
    } while (ch != 0);
    return 0;
}

void insert(void)
{
    queue *newNode, *ptr;
    char ch;
    int val;
    newNode = (queue *)malloc(sizeof(queue));
    cout << "Enter the value to store into the queue: " << endl;
    cin >> val;
    newNode->data = val;
    front = newNode; rare = newNode;
    cout << "Do you want to store more data? (Y/N): ";
    fflush(stdin);
    cin >> ch;
    while (ch == 'Y')
    {
        ptr = (queue *)malloc(sizeof(queue));
        cout << "Enter the value to store into the queue: " << endl;
        cin >> ptr->data;
        newNode->link = ptr;
        rare = ptr;
        cout << "Do you want to store more data? (Y/N): ";
        fflush(stdin);
        cin >> ch;
    }
    newNode->link = NULL;
}

void create(void)
{
    queue *newNode;
    newNode = (queue *)malloc(sizeof(queue));
    cout << "Enter the value to store into the queue: " << endl;
    cin >> newNode->data;
    rare->link = newNode;
    rare = newNode;
}

int Delete(void)
{
    int val;
    queue *temp;
    if (front == NULL)
    {
        cout << "Queue is Empty...";
    }
    else
    {
        val = front->data;
        temp = front;
        front = front->link;
        free(temp);
        return val;
    }
    return -1;
}

void display(void)
{
    queue *ptr;
    cout << "Front ->";
    ptr = front;
    while (ptr != rare)
    {
        cout << " " << ptr->data;
        ptr = ptr->link;
    }
    cout << " <-Rear";
}