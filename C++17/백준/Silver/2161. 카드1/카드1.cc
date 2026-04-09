#include <iostream>
using namespace std;

void erasefront(int* queue, int& front, int queue_size){
    front = (front+1)%queue_size;
    queue[front] = 0;
}

void pushrear(int* queue, int& rear, int queue_size, int data){
    rear = (rear+1)%queue_size;
    queue[rear] = data;
}

int main(){
    int queue_size, rear, front=-1;
    cin >> queue_size;
    int* queue = new int[queue_size];
    rear = queue_size -1;
    for(int i=0; i<queue_size; i++){
        queue[i] = i+1;
    }
    for(int i=1; i<queue_size; i++){
        cout << queue[(front+1)%queue_size] << " ";
        erasefront(queue, front, queue_size);
        pushrear(queue, rear, queue_size, queue[(front+1)%queue_size]);
        erasefront(queue, front, queue_size);
    }
    cout << queue[(front+1)%queue_size];
}