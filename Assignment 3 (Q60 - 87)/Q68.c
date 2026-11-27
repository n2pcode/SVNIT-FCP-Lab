
#include <stdio.h>

void readBook(char title[], char author[], float price) {
    printf("Enter book title (one word): ");
    scanf("%s", title);

    printf("Enter author name (one word): ");
    scanf("%s", author);

    printf("Enter book price: ");
    scanf("%f", &price);
}

void displayBook(char title[], char author[], float price) {
    printf("\nBook Information\n");
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Price: %.2f\n", price);
}

int main() {
    char title[50], author[50];
    float price;

    printf("Enter book title (one word): ");
    scanf("%49s", title);

    printf("Enter author name (one word): ");
    scanf("%49s", author);

    printf("Enter book price: ");
    scanf("%f", &price);

    displayBook(title, author, price);

    return 0;
}
