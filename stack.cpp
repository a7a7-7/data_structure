#include<iostream>

using namespace std;

class stack_yamae {
private:
    int stack[11235813];
    int top_index = -1;
public:
    void push(int num) {
        top_index++;
        stack[top_index] = num;
    }

    void pop() {
        top_index--;
    }

    int top() {
        return stack[top_index];
    }

    bool empty() {
        if (top_index == -1)
            return true;
        return false;
    }
};

int main() {
    stack_yamae stack;
    stack.push(1024);

    cout << stack.top() << endl;
    stack.pop();
    if (stack.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;


    return 0;
}