int main() {
    int i, j;
    int rows = 5;  // Number of rows
    int rows = 5;  

    for (i = 1; i <= rows; i++) {          // Outer loop for rows
        for (j = 1; j <= i; j++) {         // Inner loop for numbers
    for (i = 1; i <= rows; i++) {          
        for (j = 1; j <= i; j++) {         
            printf("%d", j);
        }
        printf("\n");  // Move to next line after each row
        printf("\n");  
    }

    return 0;
