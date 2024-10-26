#include <stdio.h>

// Define the structure
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Initialize the structure with the given values
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    // Print the values of the fields
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    // Prompt the user to enter the details
    struct book userBook;
    printf("\nEnter book details:\n");
    printf("Enter title: ");
    scanf(" %[^\n]", userBook.title); // %[^\n] allows spaces in input
    printf("Enter author: ");
    scanf(" %[^\n]", userBook.author);
    printf("Enter publication year: ");
    scanf("%d", &userBook.publication_year);
    printf("Enter ISBN: ");
    scanf("%s", userBook.ISBN);
    printf("Enter price: ");
    scanf("%f", &userBook.price);

    // Print the values entered by the user
    printf("\nEntered Book Details:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}