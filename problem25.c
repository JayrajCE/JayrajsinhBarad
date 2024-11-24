#include <stdio.h>  // Include standard input/output library

// Define a structure to store book details
struct book {
    int accession_number;  // Accession number of the book
    char title[50];        // Title of the book
    char author[50];       // Author of the book
    float price;           // Price of the book
    int flag;              // Flag to indicate if the book is issued (1 for Yes, 0 for No)
};

int main() {
    struct book b;  // Declare a variable 'b' of type 'struct book'
    
    // Input book details from the user
    printf("Enter accession number: "); 
    scanf("%d", &b.accession_number);
    
    printf("Enter title of the book: "); 
    scanf(" %[^\n]", b.title);  // Read title, allowing spaces
    
    printf("Enter author name: "); 
    scanf(" %[^\n]", b.author);  // Read author name, allowing spaces
    
    printf("Enter price of the book: "); 
    scanf("%f", &b.price);  // Read price
    
    printf("Is the book issued (1 for Yes, 0 for No): "); 
    scanf("%d", &b.flag);  // Read issued status (flag)
    
    // Display the details of the book
    printf("\nBook Details:\n");
    printf("Accession Number: %d\n", b.accession_number);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
    printf("Issued: %s\n", b.flag ? "Yes" : "No");  // Display issued status based on flag
    
    // Display programmer's details
   printf("\n\nProgramer : Jayrajsinh\nID : 24CE006");
    return 0;  // Return 0 to indicate successful execution
}
