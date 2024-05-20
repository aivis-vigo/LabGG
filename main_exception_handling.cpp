#include <iostream>
#include <stdexcept>

using namespace std;

struct node {
    int number;
    node *next;
public:
    explicit node(int x) : number(x), next(nullptr) {}

    ~node() {
        if (next != NULL) delete next;
    }

    int value() const {
        return number;
    }

    node *nextNode() const {
        return (next) ? next : nullptr;
    }

    node *insert(int value) {
        node *head = new node(value);
        head->next = this;
        return head;
    }

    void display() const {
        cout << number << " ";
        if (next != nullptr) next->display();
    }

    node *findFirstMax() {
        node *list = this;
        node *highest = nullptr;

        while (list != nullptr) {
            if (highest == nullptr) {
                highest = list;
            }
            if (list->value() > highest->value()) {
                highest = list;
            }
            list = list->nextNode();
        }
        return highest;
    }

    node *findSecondMax(node *first) {
        node *secondMax = nullptr;
        node *current = this;

        while (current) {
            if (current->value() != first->value() && (secondMax == nullptr || current->value() > secondMax->value())) {
                secondMax = current;
            }
            current = current->nextNode();
        }

        if (!secondMax) {
            throw runtime_error("List is too short to find 2nd largest value!");
        } else {
            return secondMax;
        }
    }

    node *moveSecondLargestToEnd() {
        node *firstMax = this->findFirstMax();
        node *secondMax = this->findSecondMax(firstMax);

        if (secondMax == nullptr || secondMax->nextNode() == nullptr) return this;

        node *lastNode = this;
        while (lastNode->nextNode()) {
            lastNode = lastNode->nextNode();
        }

        node *start = nullptr;
        if (this == secondMax) {
            start = this->nextNode();
        } else {
            node *prev = this;
            while (prev->nextNode() != secondMax) {
                prev = prev->nextNode();
            }
            prev->next = secondMax->nextNode();
        }

        lastNode->next = secondMax;
        secondMax->next = nullptr;

        return (start) ? start : this;
    }
};

int main() {
    while (true) {
        node *list = nullptr;
        int count = 0;
        int choice, numberOfChoice;
        bool first = true;

        try {
            do {
                cout << "Number of items to add to list: ";
                cin >> count;

                if (count <= 0) {
                    cerr << "Only positive integers allowed!" << endl;
                }
            } while (count <= 0);

            for (int i = 0; i < count; i++) {
                cout << "Enter number " << i + 1 << " : ";
                cin >> numberOfChoice;
                list = (first) ? new node(numberOfChoice) : list->insert(numberOfChoice);
                first = false;
            }

            list = list->moveSecondLargestToEnd();

            cout << "=========================" << endl;
            cout << "Result: " << endl;
            list->display();
            cout << endl;

            cout << "=========================" << endl;
            cout << "Continue (1)" << endl;
            cout << "Quit (2)" << endl;
            cout << endl;

            do {
                cout << "Choice: ";
                cin >> choice;

                if (choice == 2) {
                    delete list;
                    return 0;
                }

                if (choice < 1 || choice > 2) {
                    cerr << "Invalid choice!" << endl;
                }
            } while (choice < 1 || choice > 2);

            delete list;
        } catch (const exception& e) {
            cout << "Error: " << e.what() << endl;

            cout << "=========================" << endl;
            cout << "Continue (1)" << endl;
            cout << "Quit (2)" << endl;
            cout << endl;

            do {
                cout << "Choice: ";
                cin >> choice;

                if (choice == 2) {
                    delete list;
                    return 0;
                }

                if (choice < 1 || choice > 2) {
                    cerr << "Invalid choice!" << endl;
                }
            } while (choice < 1 || choice > 2);
        }
    }
}
