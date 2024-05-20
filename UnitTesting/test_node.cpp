#include <gtest/gtest.h>
#include "node.h"  // Ensure this header file contains the definition of the node class

// Helper function to create a linked list from a vector of integers
node* createLinkedList(const std::vector<int>& values) {
    node* head = nullptr;
    for (int i = values.size() - 1; i >= 0; --i) {
        if (head == nullptr) {
            head = new node(values[i]);
        } else {
            head = head->insert(values[i]);
        }
    }
    return head;
}

// Test case for finding the first maximum value
TEST(NodeTest, FindFirstMax) {
    std::vector<int> values = {1, 3, 5, 7, 2};
    node* list = createLinkedList(values);

    node* firstMax = list->findFirstMax();
    EXPECT_EQ(firstMax->value(), 7);

    delete list;
}

// Test case for finding the second maximum value
TEST(NodeTest, FindSecondMax) {
    std::vector<int> values = {1, 3, 5, 7, 2};
    node* list = createLinkedList(values);

    node* firstMax = list->findFirstMax();
    node* secondMax = list->findSecondMax(firstMax);
    EXPECT_EQ(secondMax->value(), 5);

    delete list;
}

// Test case for moving the second largest value to the end of the list
TEST(NodeTest, MoveSecondLargestToEnd) {
    std::vector<int> values = {1, 3, 5, 7, 2};
    node* list = createLinkedList(values);

    list = list->moveSecondLargestToEnd();

    std::vector<int> expected = {1, 3, 7, 2, 5};
    node* current = list;
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_NE(current, nullptr);
        EXPECT_EQ(current->value(), expected[i]);
        current = current->nextNode();
    }

    delete list;
}

// Test case for a single element list (edge case)
TEST(NodeTest, SingleElementList) {
    std::vector<int> values = {5};
    node* list = createLinkedList(values);

    list = list->moveSecondLargestToEnd();
    EXPECT_EQ(list->value(), 5);
    EXPECT_EQ(list->nextNode(), nullptr);

    delete list;
}

// Test case for an empty list (edge case)
TEST(NodeTest, EmptyList) {
    node* list = nullptr;

    list = list->moveSecondLargestToEnd();
    EXPECT_EQ(list, nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
