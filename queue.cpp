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


// circular queue
// class Cqueue{
//     int front;
//     int rear;
//     int size;
//     int *arr;
// public:
//     Cqueue(int size){
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
//         if((rear+1)%size==front){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     void push(int data){
//         if(isFull()){
//             cout<<"cannot insert the queue is already full."<<endl;
//         }else if(isEmpty()){
//             front=0;
//             arr[++rear]=data;
//         }else{
//             rear=(rear+1)%size;
//             arr[rear]=data;
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
//             front=(front+1)%size;
//         }
//     }
//     int length(){
//     if (isEmpty()) return 0;
//     return (rear - front + size) % size + 1;
//     }

//     int Front(){
//     if (isEmpty()) {
//         cout << "Queue is empty!" << endl;
//         return -1;
//     }
//     return arr[front];
//     }

//     int Rear(){
//         if (isEmpty()) {
//             cout << "Queue is empty!" << endl;
//             return -1;
//         }
//         return arr[rear];
//     }


//     ~Cqueue(){
//     delete[] arr;
// }
// };
   
// int main(){
//     Cqueue q(5);
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
//     cout<<q.Front()<<endl;
//     cout<<q.Rear();
// }



//deque
// class Deque{
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     public:

//     Deque(int size){
//         arr=new int[size];
//         this->size=size;
//         this->front=-1;
//         this->rear=-1;
//     }

//     bool isEmpty(){
//         if(front==-1 && rear==-1){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     bool isFull(){
//         if(front==0 && rear==size-1){
//             return 1;
//         }else{
//             return 0;
//         }
//     }
//     void push_front(int data){
//         if(isFull() || front==0){
//             cout<<"cannot insert at front"<<endl;
//         }else if(isEmpty()){
//             front=0;
//             rear=0;
//             arr[front]=data;
//         }else{
//             front--;
//             arr[front]=data;
//         }
//     }
//     void push_rear(int data){
//         if(isFull() || rear==size-1){
//             cout<<"cannot insert at front"<<endl;
//         }else if(isEmpty()){
//             front=0;
//             rear=0;
//             arr[rear]=data;
//         }else{
//             arr[++rear]=data;
//         }
//     }
//     void delete_front(){
//         if(isEmpty()){
//             cout<<"cannot delete from front"<<endl;
//         }else{
//             arr[front]=-1;
//             front++;
//             if(front>rear){
//                 front=-1;
//                 rear=-1;
//             }
//         }
//     }
//     void delete_rear(){
//         if(isEmpty()){
//             cout<<"cannot delete from front"<<endl;
//         }else{
//             arr[rear]=-1;
//             rear--;
//             if(front>rear){
//                 front=-1;
//                 rear=-1;
//             }
//         }
//     }
//     int front_top(){
//         if(isEmpty()){
//             cout<<"nothing in queue, queue is empty"<<endl;
//         }else{
//             return arr[front];
//         }
//     }
//     int rear_top(){
//         if(isEmpty()){
//             cout<<"nothing in queue, queue is empty"<<endl;
//         }else{
//             return arr[rear];
//         }
//     }
// };
// int main() {
//     Deque dq(5);  // deque of size 5

//     cout << "Inserting elements at rear...\n";
//     dq.push_rear(10);
//     dq.push_rear(20);
//     dq.push_rear(30);

//     cout << "Front element: " << dq.front_top() << endl;
//     cout << "Rear element: " << dq.rear_top() << endl;

//     cout << "\nDeleting one element from rear...\n";
//     dq.delete_rear();

//     cout << "Front element after delete_rear: " << dq.front_top() << endl;
//     cout << "Rear element after delete_rear: " << dq.rear_top() << endl;

//     cout << "\nInserting element at front...\n";
//     dq.push_front(5);

//     cout << "Front element: " << dq.front_top() << endl;
//     cout << "Rear element: " << dq.rear_top() << endl;

//     cout << "\nDeleting one element from front...\n";
//     dq.delete_front();

//     cout << "Front element: " << dq.front_top() << endl;
//     cout << "Rear element: " << dq.rear_top() << endl;

//     cout << "\nTrying to overfill the deque...\n";
//     dq.push_rear(40);
//     dq.push_rear(50);
//     dq.push_rear(60);  // should show "cannot insert at front" (overflow condition)

//     return 0;
// }





// circular deque

// class Cdeque {
//     int size;
//     int *arr;
//     int front;
//     int rear;

// public:
//     Cdeque(int size) {
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return (front == -1);
//     }

//     bool isFull() {
//         return ((rear + 1) % size == front);
//     }

//     void push_front(int data) {
//         if (isFull()) {
//             cout << "Cannot insert at front (Deque is full)" << endl;
//             return;
//         }

//         if (isEmpty()) {
//             front = rear = 0;
//         } else {
//             front = (front - 1 + size) % size;
//         }
//         arr[front] = data;
//     }

//     void push_rear(int data) {
//         if (isFull()) {
//             cout << "Cannot insert at rear (Deque is full)" << endl;
//             return;
//         }

//         if (isEmpty()) {
//             front = rear = 0;
//         } else {
//             rear = (rear + 1) % size;
//         }
//         arr[rear] = data;
//     }
