#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

struct node {
    int number;
    node *next;
public:
    // constructor for node
    explicit node(int x) : number(x), next(nullptr) {}

    // destructor
    ~node() {
        if (next != NULL) delete next;
    }

    // method to return selected node's value
    int value() const { return number; }

    // method to move on to the next node
    node *nextNode() const {
        return (next) ? next : nullptr;
    }

    node *insert(int value) {
        node *head = new node(value);
        // sets current node as head of the list
        head->next = this;
        // returns modified list
        return head;
    }

    // displays inserted values
    void display() const {
        cout << number << " ";
        // if it's not the end of the list call method itself recursively until there are no more values to display
        if (next != nullptr) next->display();
    }

    // find the node with the highest value
    node *findFirstMax() {
        node *list = this;
        node *highest = nullptr;

        while (list != nullptr) {
            // if current value is smaller than next one, set next value as the highest one
            if (highest == nullptr) {
                highest = list;
            }

            if (list->value() > highest->value()) {
                highest = list;
            }

            list = list->nextNode();
        }

        // return last largest value
        return highest;
    }

    // find the node with the 2nd highest value
    node *findSecondMax(node *first) {
        node *secondMax = nullptr;
        node *current = this;

        while (current->nextNode()) {
            // Ensure the current node is not the firstMax and either secondMax is null
            // or current's value is greater than secondMax's value.
            if (current->value() != first->value() && (secondMax == nullptr || current->value() > secondMax->value())) {
                secondMax = current;
            }
            current = current->nextNode();
        }

        return secondMax;
    }

    // moved 2nd highest node to the end of the list
    node *moveSecondLargestToEnd() {
        node *firstMax = this->findFirstMax();
        node *secondMax = this->findSecondMax(firstMax);

        // If secondMax is nullptr, it means there's only one element or the list is empty or element is already the last one and there is no need to sort list, so the list is returned without any modifications
        if (secondMax == nullptr || secondMax->nextNode() == nullptr) return this;

        // find last node, so it can be used later on in the process to mount 2nd largest value in the end of the list
        node *lastNode = this;
        while (lastNode->nextNode()) {
            lastNode = lastNode->nextNode();
        }

        node *start = nullptr;
        // if 2nd largest node is the head of the list, start sorting list from the 2nd of the original list
        if (this == secondMax) {
            start = this->nextNode();
        } else {
            node *prev = this;
            // finding a place where the next node would be the 2nd largest
            while (prev->nextNode() != secondMax) {
                prev = prev->nextNode();
            }

            // "skipping" over 2nd largest value
            // current  node gets linked with the 2nd largest values next node
            prev->next = secondMax->nextNode();
        }

        // using the last node we link the 2nd largest node to the end of the list
        lastNode->next = secondMax;
        // modify the 2nd largest node as the last node
        secondMax->next = nullptr;

        // if 2nd largest node was the first one return that specific list, else return list where the 2nd largest value was somewhere in the middle
        return (start) ? start : this;
    }
};

#endif // NODE_H