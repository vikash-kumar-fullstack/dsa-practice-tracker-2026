#include<iostream>
#include<stack>
#include <string>
using namespace std;


//using build in function and methods
// int main(){
//     //creation
//     stack<int>st;

//     //insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     //size
//     cout<<"size of the stack is :"<<st.size()<<endl;

//     //deletion
//     st.pop();

//     //checking empty
//     if(st.empty()){
//         cout<<"stack is empty "<<endl;
//     }else{
//         cout<<"stack is not empty"<<endl;
//     }

//     //top
//     cout<<st.top();
// }


//implementing the stack using array
//creation 
// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         this->top=-1;
//     }
//     void insert(int data){
//         if(top<size){
//             arr[++top]=data;
//         }
//     }

//     // deletion
//     void del(){
//         if(top!=-1){
//             top--;
//         }
//     }

//     //empty
//     void isEmpty(){
//         if(top==-1){
//             cout<<"stack is empty"<<endl;
//         }else{
//             cout<<"stack is not empty"<<endl;
//         }
//     }


//     //full
//     void isFull(){
//         if(top==size-1){
//             cout<<"stack is full"<<endl;
//         }else{
//             cout<<"stack is not full"<<endl;
//         }
//     }

//     //size
//     void length(){
//         cout<<"size is :"<<top+1<<endl;
//     }
//     void print(){
//         int i=0;
//         while(i<=top){
//             cout<<arr[top-i]<<endl;
//             i++;
//         }
//     }
//     int topEle(){
//         return arr[top];
//     }
// };
// int main(){
//     Stack st(8);
//     st.insert(12);
//     st.insert(13);
//     st.insert(15);
//     st.print();
//     st.del();
//     cout<<(st.topEle());
//     st.isEmpty();
//     st.isFull();
//     st.length();
// }


// print reverse the string 
// int main(){
//     string st="heelo vikash";
//     stack<char> sta;

//     for(int i=0;i<st.length();i++){
//         char ch=st[i];
//         sta.push(ch);
//     }
//     while(!sta.empty()){
//         cout<<sta.top()<<"  ";
//         sta.pop();
//     }
// }


// finding middle elements of the stack
// int middle_ele(stack <int> &sta,int pos){
//     if(sta.size()==0){
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
//     if(pos==1){
//         return sta.top();
//     }
//     int temp=sta.top();
//     sta.pop();
//     int res=middle_ele(sta,pos-1);
//     sta.push(temp);
//     return res;
// }

// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     int length=st.size();
//     int pos;
//     if(length&1){
//         pos=length/2+1;
//     }else{
//         pos=length/2;
//     }
//     int mid=middle_ele(st,pos);
//     cout<<"middle element :"<<mid;
// }

//
void print(stack<int>&sta){
    if(sta.empty()){
        return;
    }
    int temp=sta.top();
    cout<<temp<<" ";
    sta.pop();
    print(sta);
    sta.push(temp);
}

//inserting at the buttom

void insertAtButtom(stack<int>&sta,int data){
    if(sta.empty()){
        sta.push(data);
        return;
    }
    int temp=sta.top();
    sta.pop();
    insertAtButtom(sta,data);
    sta.push(temp);
}

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     print(st);
//     cout<<endl;
//     insertAtButtom(st,0);
//     print(st);
    
// }


//reverse the stack

void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    reverse(st);
    insertAtButtom(st,temp);
}

// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     print(st);
//     cout<<endl;
//     reverse(st);
//     print(st);
// }


//insert in the sorted stack
void insertInSorted(stack<int>&st,int data){
    if(st.empty() || st.top()<data){
        st.push(data);
        return;
    }
    int temp=st.top();
    st.pop();
    insertInSorted(st,data);
    st.push(temp);
}

// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     int data=25;

//     cout<<"before insertion :";
//     print(st);
//     cout<<endl;
//     insertInSorted(st,data);
//     cout<<"after insertion :";
//     print(st);
// }

//sort the stack
void sorting(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    sorting(st);
    insertInSorted(st,temp);
}
// int main(){
//     stack<int>st;
//     st.push(0);
//     st.push(5);
//     st.push(3);
//     st.push(1);
//     st.push(4);

//     cout<<"before sorting :";
//     print(st);
//     cout<<endl;
//     sorting(st);
//     cout<<"after sorting :";
//     print(st);
// }

//implementing two stack using one array
// class Stack{
//     public:
//     int *arr;
//     int top1;
//     int top2;
//     int size;

//     Stack(int size){
//         arr=new int[size];
//         this->top1=-1;
//         this->top2=size;
//         this->size=size;
//     }
//     void isEmpty(){
//         if(top1==-1 || top2==size){
//             cout<<"Underflow"<<endl;
//         }else{
//             cout<<"not underflow"<<endl;
//         }
//     }
//     void isFull(){
//         if(top2-top1==1){
//             cout<<"overflow"<<endl;
//         }else{
//             cout<<"not overflow"<<endl;
//         }
//     }
//     void push1(int data){
//         if(top2-top1!=1){
//             arr[++top1]=data;
//         }
//     }
//     void push2(int data){
//         if(top2-top1!=1){
//             arr[--top2]=data;
//         }
//     }
//     void pop1(){
//         if(top1!=-1){
//             cout<<"Popped element :"<<arr[top1--]<<endl;
//             return;
//         }
//     }
//     void pop2(){
//         if(top2!=size){
//             cout<<"Popped element :"<<arr[top2++]<<endl;
//             return;
//         }
//     }


// };
// int main(){
//     Stack st(5);
//     st.isEmpty();
//     st.isFull();
//     st.push1(2);
//     st.push2(7);
//     st.push1(3);
//     st.push2(6);
//     st.push2(5);
//     st.isFull();
//     st.isEmpty();
//     st.pop1();
//     st.pop2();
// }


// valid parenthesis
// int main() {
//     string str = "({[]})";
//     stack<char> st;

//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         if (ch == '(' || ch == '{' || ch == '[') {
//             st.push(ch);
//         } else {
//             if (!st.empty()) {
//                 if ((ch == ')' && st.top() == '(') ||
//                     (ch == '}' && st.top() == '{') ||
//                     (ch == ']' && st.top() == '[')) {
//                     st.pop();
//                 } else {
//                     cout << "invalid";   
//                     return 0;
//                 }
//             } else {
//                 cout << "invalid";      
//                 return 0;
//             }
//         }
//     }

//     if (st.empty()) {
//         cout << "valid";   
//     } else {
//         cout << "invalid";  
//     }

//     return 0;
// }


// remove redundant brackets
// int main(){
//     string str="b*(a+b)";
//     stack<char>st;

//     for(int i=0;i<str.length();i++){
//         char ch=str[i];

//         if (ch == '(' || ch == '{' || ch == '[' || 
//             ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%') {
//             st.push(ch);
//         }
//         // ✅ added: ignore alphabets and digits
//         else if(isalnum(ch)){
//             continue;
//         }
//         else{
//             if(!st.empty()){
//                 bool hasOperator=false;
//                 if((ch == ')' || ch == '}' || ch == ']')){
//                     while(!st.empty() && (st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/' || st.top()=='%')){
//                         st.pop();
//                         hasOperator=true;
//                     }
//                     if(!st.empty()) st.pop();
//                     if(!hasOperator){
//                         cout<<"invalid";
//                         return 0;
//                     }
//                 }
//                 // ❌ removed unnecessary else that caused invalid for 'a' or 'b'
//                 else{
//                     cout<<"invalid";
//                     return 0;
//                 }
//             }else{
//                 cout<<"invalid";
//                 return 0;
//             }
//         }
//     }

//     if(st.size()==0){
//         cout<<"valid";
//         return 1;
//     }else{
//         cout<<"invalid";
//         return 0;
//     }
// }


// min stack
// by pair storing 
// class Stack {
//     stack<pair<int,int>> st;

// public:
//     void push(int data) {
//         if(st.empty()) {
//             st.push({data, data});
//         } else {
//             int currentMin = min(data, st.top().second);
//             st.push({data, currentMin});
//         }
//     }

//     void pop() {
//         if(!st.empty()) st.pop();
//     }

//     int top() {
//         if(st.empty()) {
//             cout << "Stack is empty!" << endl;
//             return -1;
//         }
//         return st.top().first;
//     }

//     int getMin() {
//         if(st.empty()) {
//             cout << "Stack is empty!" << endl;
//             return -1;
//         }
//         return st.top().second;
//     }
// };

// int main() {
//     Stack st;
//     cout << st.top() << endl;       // Stack empty
//     st.push(12);
//     cout << st.getMin() << endl;    // 12
//     st.push(15);
//     cout << st.top() << endl;       // 15
//     st.push(10);
//     cout << st.top() << endl;       // 10
//     cout << st.getMin() << endl;    // 10
//     st.pop();
//     cout << st.getMin() << endl;    // 12
// }


