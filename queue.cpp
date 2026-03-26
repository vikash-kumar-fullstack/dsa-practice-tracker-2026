#include<iostream>
#include<queue>
using namespace std;


// using defined ds of queue

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     cout<<"the top element of queue is :"<<q.front()<<endl;
//     cout<<"the total size of queue is :"<<q.size()<<endl;

//     q.pop();
//     cout<<"after pop the isize of queue is :";
//     cout<<"the total size of queue is :"<<q.size()<<endl;
//     cout<<"the rear element of the queue is :"<<q.back()<<endl;
// }


// using array implementing the queue ds

// class Queue{
//     int front;
//     int rear;
//     int size;
//     int *arr;
// public:
//     Queue(int size){
//         arr=new int[size];
//         this->front=-1;
//         this->rear=-1;
//         this->size=size;
//     }
//     int isEmpty(){
//         if(front==-1 &&rear ==-1){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     int isFull(){
//         if(rear>=size-1){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     void push(int data){
//         if(isFull()){
//             cout<<"cannot insert the queue is already full."<<endl;
//         }else if(isEmpty()){
//             front++;
//             arr[++rear]=data;
//         }else{
//             arr[++rear]=data;
//         }
//     }
//     void pop(){
//         if(isEmpty()){
//             cout<<"cannot delete from the queue is already empty."<<endl;
//         }else if(front==rear){
//             arr[front]=-1;
//             front=-1;
//             rear=-1;
//         }else{
//             arr[front]=-1;
//             front++;
//         }
//     }
//     int length(){
//     if (isEmpty()) return 0;
//     return rear - front + 1;
//     }
//     int Front(){
//         return arr[front];
//     }
//     int Rear(){
//         return arr[rear];
//     }

//     ~Queue(){
//     delete[] arr;
// }
// };
   
// int main(){
//     Queue q(5);
//     cout<<q.isEmpty()<<endl;
//     cout<<q.isFull()<<endl;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     cout<<q.isEmpty()<<endl;
//     cout<<q.isFull()<<endl;
 
//     cout<<"the front element of queue is :"<<q.Front()<<endl;
//     cout<<"the rear element of queue is :"<<q.Rear()<<endl;

//     cout<<"the total size of queue is :"<<q.length()<<endl;

//     q.pop();
//     cout<<"the front element of queue is :"<<q.Front()<<endl;
//     cout<<"the rear element of queue is :"<<q.Rear()<<endl;

//     cout<<"the total size of queue is :"<<q.length()<<endl;
//     q.push(100);
//     q.pop();
//     q.pop();
//     q.pop();

//     q.pop();
//     cout<<q.Front();
//     cout<<q.Rear();
// }


