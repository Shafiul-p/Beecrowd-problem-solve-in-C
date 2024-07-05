/*Write a program that keep reading a password until it is valid.
 For each wrong password read, write the message "Senha inválida".
  When the password is typed correctly print the message "Acesso Permitido" and 
  finished the program. The correct password is the number 2002.*/
#include <stdio.h>

int main() {
    int password;

    while (1) { // Infinite loop to keep asking for the password
        scanf("%d", &password); // Read the password
        if (password == 2002) { // Check if the password is correct
            printf("Acesso Permitido\n");
            break; // Exit the loop if the password is correct
        } else {
            printf("Senha Invalida\n"); // Print the message for an invalid password
        }
    }

    return 0;
}
