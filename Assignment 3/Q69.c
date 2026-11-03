#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void readBook(struct Book *b) {
    printf("Enter book id: ");
    scanf("%d", &b->id);
    printf("Enter title: ");
    scanf(" %[^\n]", b->title);
    printf("Enter author: ");
    scanf(" %[^\n]", b->author);
    printf("Enter price: ");
    scanf("%f", &b->price);
}

void displayBook(struct Book *b) {
    printf("\n--- Book Information ---\n");
    printf("ID     : %d\n", b->id);
    printf("Title  : %s\n", b->title);
    printf("Author : %s\n", b->author);
    printf("Price  : %.2f\n", b->price);
}

int main() {
    struct Book b;
    readBook(&b);
    displayBook(&b);
    return 0;
}