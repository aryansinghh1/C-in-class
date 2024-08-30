#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int scores[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap scores[j] and scores[j + 1]
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int scores[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (scores[j] < scores[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = scores[minIndex];
        scores[minIndex] = scores[i];
        scores[i] = temp;
    }
}

bool isNearlySorted(int scores[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (scores[i] > scores[i + 1]) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}

void sortArray(int scores[], int n) {
    if (isNearlySorted(scores, n)) {
        printf("Using Bubble Sort\n");
        bubbleSort(scores, n);
    } else {
        printf("Using Selection Sort\n");
        selectionSort(scores, n);
    }
}

void printArray(int scores[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int examScores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &examScores[i]);
    }

    sortArray(examScores, n);
    
    printf("Sorted Exam Scores: ");
    printArray(examScores, n);

    return 0;
}
