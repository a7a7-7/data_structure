#include<iostream>

using namespace std;

class stack_yamae {
private:
    int stack[10];
    int top_index = -1;
public:
    void push(int num) {
        if (full()) {
            cout << "cannot push anymore, max capacity!!" << endl;
            return;
        }
        top_index++;
        stack[top_index] = num;
    }

    int pop() {
        if (empty()) {
            cout << "cannot pop anymore, stack is empty!" << endl;
            return -1;
        }
        return stack[--top_index];
    }

    bool full() {
        return top_index == 10 - 1;
    }

    bool empty() {
        if (top_index == -1)
            return true;
        return false;
    }
};

int main() {
    stack_yamae stack;
    // Add data over 10 times
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.push(11);

    cout << stack.pop() << endl;

    if (stack.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;


    return 0;
}