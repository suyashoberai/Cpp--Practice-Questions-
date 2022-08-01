// #include<iostream>
// using namespace std;
// #include<stack>
// #define MAX 10

// class myStack{
//     public:
//     int top;
//     int A[10];

//     void push(int item){
//         top=+1;
//         A[top]=item;
//     }
//     void pop(int p){
//         A[top];
//         top=-1;

//     }

// };

// int main(){
//     myStack st;
//     st.push(10);
//     st.push(14);
//     st.push(27);
//     st.push(32);
//     st.pop(10);

// }



// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s;//creation of stack

//     s.push(2);
//     s.push(3); //push operation

//     //pop
//     s.pop();

//     cout<<"printing top element "<<s.top()<<endl;

//     if(s.empty()){
//         cout<<"stack is empty "<<endl;
//     }
//     else{
//         cout<<"stack is not empty "<<endl;
//     }

//     return 0;

// }


#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        if(top >=0 )
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if( top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};


int main() {


    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty " << endl;
    }
    else{
        cout << "Stack is not Empty " << endl;
    }}