/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
     *returnSize = n;

    char** answer = malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {

        answer[i - 1] = malloc(12 * sizeof(char));

        if (i % 3 == 0 && i % 5 == 0) {
            printf(answer[i - 1], "FizzBuzz");
        }
        else if (i % 3 == 0) {
            printf(answer[i - 1], "Fizz");
        }
        else if (i % 5 == 0) {
            printf(answer[i - 1], "Buzz");
        }
        else {
            printf(answer[i - 1], "%d", i);
        }
    }

    return answer;
    
}
 //Print numbers from 1 to n. Print Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz for multiples of both.
    //fizz buzz Leet Code
    //Loops,if else
