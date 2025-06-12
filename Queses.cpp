#include <iostream>
using namespace std;

class queues {
    int FRONT, REAR, max = 5;
    int queue_array[5];

    public:
    queues(){
        FRONT = -1;
        REAR = -1;
    }

    void insert(){
        int num;
        cout << "enter a number: ";
        cin >> num;
        cout << endl;

        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)){
            cout  << "\nqueue overflow\n";
            return;
        }

        if (FRONT == -1){
            FRONT = 0;
            REAR = 0;
        }

        else {
            if (REAR == max -1)
            REAR = 0;
            else
            REAR = REAR + 1;
        }
        queue_array[REAR] = num;
    }

    void remove (){
        if (FRONT == -1){
            cout << "queue underflow\n";
            return;
        }
        cout << "\nThe element deleted from the queue is : " << queue_array[FRONT] << "\n";


        if (FRONT == REAR){
            FRONT = -1;
            REAR = -1;
        }
        else {
            if (FRONT == max - 1)
            FRONT = 0;
            else 
            FRONT = FRONT + 1; 
        }
    }

    void display(){
        int FRONT_position = FRONT;
        int REAR_position = REAR;

        if (FRONT == -1){
            cout << "queue is empty\n";
            return ;
        }

        cout << "\nElemen in the queue are...\n";

        if (FRONT_position <= REAR_position){
            while (FRONT_position <= REAR_position){
                cout << queue_array[FRONT_position] << "  ";
                FRONT_position++;
            }

            
        }
    }
}