#include <stdio.h>

struct book
{
    char name[50];
    char author[50];
    float price;
};

void read(struct book *b)
{
    printf("Enter book name: ");
    scanf("%s", b->name);

    printf("Enter author name: ");
    scanf("%s", b->author);

    printf("Enter book price: ");
    scanf("%f", &b->price);
}

void display(struct book *b)
{
    printf("\nBook Information:\n");

    printf("Book Name: %s\n", b->name);
    printf("Author Name: %s\n", b->author);
    printf("Book Price: %.2f\n", b->price);
}

int main()
{
    struct book b1;

    read(&b1);
    display(&b1);

    return 0;
}