#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold product details
struct Product {
    int productId;
    char name[50];
    float price;
};

// Union for storing product details (alternative representation)
union ProductUnion {
    int productId;
    char name[50];
    float price;
};

// Node for a basic linked list
struct Node {
    struct Product product;
    struct Node* next;
};

int main() {
    // Using array of structures
    struct Product productsArray[3];

    // Storing product details in the array
    productsArray[0].productId = 1;
    strcpy(productsArray[0].name, "Product A");
    productsArray[0].price = 19.99;

    productsArray[1].productId = 2;
    strcpy(productsArray[1].name, "Product B");
    productsArray[1].price = 29.99;

    productsArray[2].productId = 3;
    strcpy(productsArray[2].name, "Product C");
    productsArray[2].price = 39.99;

    // Using union for an alternative representation
    union ProductUnion productUnion;
    productUnion.productId = 4;
    // Accessing other fields
    // productUnion.name, productUnion.price

    // Using a basic linked list for dynamic storage
    struct Node* head = NULL;

    // Adding nodes to the linked list
    struct Node* newNode1 = (struct Node*)malloc(sizeof(struct Node));
    newNode1->product.productId = 5;
    strcpy(newNode1->product.name, "Product D");
    newNode1->product.price = 49.99;
    newNode1->next = NULL;
    head = newNode1;

    struct Node* newNode2 = (struct Node*)malloc(sizeof(struct Node));
    newNode2->product.productId = 6;
    strcpy(newNode2->product.name, "Product E");
    newNode2->product.price = 59.99;
    newNode2->next = NULL;
    newNode1->next = newNode2;

    // Accessing linked list elements
    struct Node* current = head;
    while (current != NULL) {
        // Accessing product details: current->product.productId, current->product.name, current->product.price
        current = current->next;
    }

    // Remember to free the allocated memory for the linked list
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}