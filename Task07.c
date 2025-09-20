#include <stdio.h>
int main() {
    int rating;
    printf("Rate the movie 'The Lion King' (1 to 5): ");
    scanf("%d", &rating);
    if (rating == 5) {
        printf("Feedback: Excellent\n");
    } else if (rating == 4) {
        printf("Feedback: Good\n");
    } else if (rating == 3) {
        printf("Feedback: Average\n");
    } else if (rating == 2) {
        printf("Feedback: Poor\n");
    } else if (rating == 1) {
        printf("Feedback: Terrible\n");
    } else {
        printf("Please enter a number between 1 and 5 only.\n");
    }
    return 0;
}

