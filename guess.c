#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char choice;

    do {
        int secret, guess, attempts = 0;

        // Random number between 1 and 1000
        srand(time(NULL));
        secret = rand() % 1000 + 1;

        printf("\n🎯 Guess The Number Game\n");
        printf("Guess a number between 1 and 1000\n");

        while (1) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < secret) {
                printf("Too Low\n");
            }
            else if (guess > secret) {
                printf("Too High\n");
            }
            else {
                printf("🎉 Correct! You guessed the number\n");
                printf("✅ Total attempts: %d\n", attempts);
                break;
            }
        }

        // Restart option
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);  // space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing! Goodbye 👋\n");
    return 0;
}