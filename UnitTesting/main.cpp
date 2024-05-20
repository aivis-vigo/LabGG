#include <iostream>
#include "node.h"

using namespace std;

int main() {
    while (true) {
        // pointer to a node object that stores memory address of variable "list"
        node *list = nullptr;
        int count = 0;
        int choice, numberOfChoice;
        int *original;
        bool first = true;

        do {
            cout << "Number of items to add to list: ";
            cin >> count;

            if (count <= 0) {
                cerr << "Only positive integers allowed!" << endl;
            }
        } while (count <= 0);

        original = new int[count];
        for (int i = 0; i < count; i++) {
            cout << "Enter number " << i + 1 << " : ";
            cin >> numberOfChoice;

            original[i] = numberOfChoice;
        }

        // creating a linked list with values in prompted order
        for (int i = count - 1; i >= 0; i--) {
            // only starting the linked list
            if (first) {
                list = new node(original[i]);
                first = false;
            } else {
                list = list->insert(original[i]);
            }
        }

        list = list->moveSecondLargestToEnd();

        cout << "=========================" << endl;
        cout << "Original: " << endl;
        for (int i = 0; i < count; i++) {
            cout << original[i] << " ";
        }
        cout << endl;

        cout << endl << "Result: " << endl;
        list->display();
        cout << endl;

        if (count == 1) {
            cerr << "There is no 2nd largest value!" << endl;
        }

        cout << "=========================" << endl;
        cout << "Continue (1)" << endl;
        cout << "Quit (2)" << endl;
        cout << endl;

        do {
            cout << "Choice: ";
            cin >> choice;

            if (choice == 2) {
                // list gets deleted
                delete list;
                delete[] original;
                return 0;
            }

            if (choice < 1 || choice > 2) {
                cerr << "Invalid choice!" << endl;
            }
        } while (choice < 1 || choice > 2);

        delete list;
        delete[] original;
    }
}
