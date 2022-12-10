#include <iostream>
using namespace std;

class MyStack
{
private:
    int *Stack;     // allocating memory for the stack
    int top;

public:

    int maxSize = 0;

    MyStack(int size)
    {
        maxSize = size;
        Stack = new int[maxSize];
        top = 0;
    }



    bool isEmpty()
    {
        if(top == 0)
        {
            cout<< "Stack is empty"<<endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if(top == maxSize)
        {
            cout<< "Stack overflow"<<endl;

            return true;
        }
        else{
            return false;
        }
    }


    bool push(int x)
    {
        if(top == maxSize)
        {
            cout<< "Stack overflown - Push operation failed"<<endl;
            cout<< "_______________________________________"<<endl;

            return false;
        }
        else
        {

            Stack[top] = x;
            top++;
            return true;
        }
    }


    bool pop()
    {
        if(top == 0)
        {
            cout<< "Stack empty - Pop operation failed"<<endl;
            cout<< "_______________________________________"<<endl;
            return false;
        }
        else
        {
            cout<< "Element popped"<<endl;
            cout<< "Popped element is: "<< Stack[top-1]<<endl;
            cout<< "_______________________________________"<<endl;
            top--;
            return true;
        }
    }


    void topElement()
    {
        if(top == 0)
        {
            cout<< "Stack empty"<<endl;
        }
        else
        {
            cout<< "Top element is: "<< Stack[top-1]<<endl;
            cout<< "_______________________________________"<<endl;
        }
    }


    void show()
    {
        if(top == 0)
        {
            cout<<"Stack Empty"<<endl;
            cout<< "_______________________________________"<<endl;
        }
        else
        {
            cout<< "_______________________________________"<<endl;
            cout<< "Stack is: "<<endl;
            for(int i = top-1; i>-1; i--)
            {

                cout<<"| "<< Stack[i]<< " |"<<endl;
            }
            cout<< "_______________________________________"<<endl;
        }
        
    }


    // this is mandatory to realease the memory taken by the stack
    ~MyStack()
    {
        delete []Stack;
    }
};

int main()
{
    int n, addSize;
    cout<< "Enter stack size: ";
    cin>>n;

    MyStack s(n);

    int op;
    int value;

    do
    {
        cout<< "_______________________________________"<<endl;
        cout<< "What do you want to do?"<<endl;
        cout<< "1.Push element in the stack"<< endl;
        cout<< "2.Pop element from the stack"<< endl;
        cout<< "3.Display the stack"<<endl;
        cout<< "4.Terminate program"<<endl;
        cout<< "_______________________________________"<<endl;

        cin>> op;

        if(op == 4)
        {
            cout<< "Program terminated"<<endl;
            break;
        }

        else if(op == 1)
        {

            if(s.isFull() == true)
            {
                cout<< "Enter size to increase: ";
                cin>> addSize;
                s.maxSize = s.maxSize + addSize;
                cout<< "Enter element to push: ";
                cin>> value;
                s.push(value);
            }
            else
            {
                cout<< "Enter element to push: ";
                cin>> value;
                s.push(value);
            }

        }
        else if (op == 2)
        {
            s.pop();
            //break;
        }
        else if(op == 3)
        {
            s.show();
            //break;
        }
        else
            cout<< "Please choose the right option to operate"<<endl;


    } while (op != 0);


}


