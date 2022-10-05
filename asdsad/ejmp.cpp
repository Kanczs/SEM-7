#include <iostream>
#include "point.h"


using namespace std;

void printArray(const point array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        array[i].print();
    cout << "]" << endl;
}

int main() {
    point p1;
    point p2(4, 5);
    point p3(6, 5);
    point p4(4, 8);
    point p5(14, 15);

    point arr[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, tam);
        
    return 0;
}