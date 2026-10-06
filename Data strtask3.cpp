#include <iostream>
using namespace std;

#define MAX 10

class ParkingGarage {
    int cars[MAX];
    int top;

public:
    ParkingGarage() {
        top = -1;
    }

    void enter(int car) {
        if (top == MAX - 1) {
            cout << "Garage is full\n";
            return;
        }

        cars[++top] = car;
        cout << "Car " << car << " entered\n";
    }

    void leave() {
        if (top == -1) {
            cout << "Garage is empty\n";
            return;
        }

        cout << "Car " << cars[top--] << " left\n";
    }

    void display() {
        cout << "Cars in garage: ";

        for (int i = top; i >= 0; i--)
            cout << cars[i] << " ";

        cout << endl;
    }
};

int main() {
    ParkingGarage garage;

    garage.enter(101);
    garage.enter(102);
    garage.enter(103);
    garage.enter(104);

    garage.display();

    garage.leave();
    garage.leave();

    garage.display();

    return 0;
}
