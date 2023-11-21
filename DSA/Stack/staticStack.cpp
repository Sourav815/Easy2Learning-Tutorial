#include <iostream>

using namespace std;
#define MAX 3

int top=-1;
int s[MAX];

void push(int x);
int pop(void);
int peek(void);
void display(void);

int main()
{
    int ch, val;

    do
    {
        cout << "\n\n ------ Menu ------\n";
        cout << "Press 1: Push" << endl;
        cout << "Press 2: Pop" << endl;
        cout << "Press 3: Peek" << endl;
        cout << "Press 4: Display" << endl;
        cout << "-----------------------------\n\n";
        cout << "Enter your option: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value to push into the stack: " << endl;
            cin >> val;
            push(val);
            break;
        case 2:
            val = pop();
            if (val != -1)
            {
                cout << "Poped Value: " << val << endl;
            }
            break;
        case 3:
            val = peek();
            if (val != -1)
            {
                cout << "Top-> " << val << endl;
            }
            break;
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

void push(int x)
{
    if (top == MAX-1)
    {
        cout << "Stack OVERFLOW!" << endl;
    }
    else
    {
        top = top + 1;
        s[top] = x;
        cout << x << " is succesfully pushed..." << endl;
        // stack.s[++stack.top] = x;
    }
    // cout << "in push " << stk.top << endl;
}
int pop(void)
{
    int x;
    if (top == -1)
    {
        cout << "Stack UNDERFLOW!" << endl;
        return -1;
    }
    else
    {
        // stack.s[stack.top] = x;
        // stack.top = stack.top--;
        return s[top--];
    }
}
void display(void)
{
    if (top == -1)
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << s[i] << " ";
        }
    }
}

int peek()
{
    if (top == -1)
    {
        cout << "Stack is Empty!" << endl;
        return -1;
    }
    else
    {
        return s[top];
    }
}