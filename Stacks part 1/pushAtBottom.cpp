// #include<iostream>
// #include<stack>
// using namespace std;

// void pushAtBottom(stack<int>& s, int data){
//     if(s.empty()){
//         s.push(data);
//         return;
//     }

//     int temp = s.top();
//     s.pop();

//     pushAtBottom(s, data);

//     s.push(temp);
// }

// int main(){
//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     pushAtBottom(s, 4);

//     while(!s.empty()){
//         cout << s.top() << ", ";
//         s.pop();
//     }

//     return 0;
// }



// --------------------------------Practice--------------------------------

#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s, int data){

    if(s.empty()){
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, data);

    s.push(temp);
}


int main(){
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s,15);
    
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
    return 0;
}