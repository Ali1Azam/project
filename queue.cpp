#include<iostream>
using namespace std;

class Queue{
    public:

    int queue[1000];
    int max_capacity;
    int size;
    int front;
    int rear;

    Queue(){
        this->front = 0;
        this->rear = -1; 
        this->max_capacity = 1000;
        this->size=0;
    }

    void enqueue(int data){
        if(size==max_capacity){
            cout<<"Maximum size has been reached. ";
            return;
        }
        rear = (rear+1)%max_capacity;
        queue[rear] = data;
        size++;
    }

    void dequeue(){
        if(size==0){
            cout<<"Size of the queue is 0 and there are no more element to dequeue. "<<endl;
            return;
        }
        cout<<"The element to be dequeued is "<<queue[front]<<endl;
        front++;
        size--;
    }

    void peakqueue(){
        cout<<"The element at the front of the queue is "<<queue[front]<<endl;
    }

    void sizeofqueue(){
        cout<<"The queue currently has "<<size<<" elements in it. "<<endl;
    }
};

int main(){
    Queue q;

    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}