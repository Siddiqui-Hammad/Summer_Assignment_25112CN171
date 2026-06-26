//Write a program to Create quiz application.

#include <stdio.h>

int main() {
    int score = 0, ans, total;

    // total questions
    total = 5;

    printf("Welcome to the Quiz Application!\n");
    printf("You will be asked %d questions.\n", total);
    printf("Each correct answer = 1 point.\n\n");

    // Q1
    printf("Q1: What is the capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Kolkata  4. Chennai\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    // Q2
    printf("Q2: Which language is used for system programming?\n");
    printf("1. Python  2. C  3. HTML  4. JavaScript\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    // Q3
    printf("Q3: Who is known as father of computers?\n");
    printf("1. Charles Babbage  2. Alan Turing  3. Bill Gates  4. Steve Jobs\n");
    scanf("%d", &ans);
    if(ans == 1) score++;

    // Q4
    printf("Q4: Which data structure uses FIFO?\n");
    printf("1. Stack  2. Queue  3. Tree  4. Graph\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    // Q5
    printf("Q5: Which company created Windows OS?\n");
    printf("1. Apple  2. Google  3. Microsoft  4. IBM\n");
    scanf("%d", &ans);
    if(ans == 3) score++;

    // final result
    printf("\nQuiz Completed!\n");
    printf("Your score = %d/%d\n", score, total);

    float percent = (score * 100.0) / total;
    printf("Percentage = %.2f%%\n", percent);

    if(percent >= 60) {
        printf("Result: PASS \n");
    } else {
        printf("Result: FAIL \n");
    }

    return 0;
}
