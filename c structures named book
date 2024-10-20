//c structures
#include <stdio.h> //scanf(),printf()
#include <string.h> //strcpy()

// Define the structure named book
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[14];  // 13 characters + 1 for the null terminator
    float price;
};

int main() {
    // Declare a variable of the structure type and initialize it
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    // Print the values of the fields of the initialized book
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n\n", myBook.price);

    // Declare another variable for user input
    struct book userBook;

    // Prompt user to enter the details of another book
    printf("Enter the details of another book:\n");

    printf("Title: ");
    fgets(userBook.title, sizeof(userBook.title), stdin);
    userBook.title[strcspn(userBook.title, "\n")] = 0;  // Remove newline character

    printf("Author: ");
    fgets(userBook.author, sizeof(userBook.author), stdin);
    userBook.author[strcspn(userBook.author, "\n")] = 0;  // Remove newline character

    printf("Publication Year: ");
    scanf("%d", &userBook.publication_year);
    getchar(); // Consume the leftover newline character

    printf("ISBN: ");
    fgets(userBook.ISBN, sizeof(userBook.ISBN), stdin);
    userBook.ISBN[strcspn(userBook.ISBN, "\n")] = 0;  // Remove newline character

    printf("Price: ");
    scanf("%f", &userBook.price);

    // Print user-entered values
    printf("\nUser Book Details:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}
