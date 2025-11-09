
#include <stdio.h>
#define SIZE 5
// Bubble Sort
void bubbleSort(float prices[], int n) {
int i, j;
float temp;
for(i = 0; i < n - 1; i++) {
for(j = 0; j < n - 1 - i; j++) {
if(prices[j] > prices[j + 1]) {
temp = prices[j];
prices[j] = prices[j + 1];
prices[j + 1] = temp;
}
}
}
}
// Selection Sort
void selectionSort(float prices[], int n) {
int i, j, minIndex;
float temp;
for(i = 0; i < n - 1; i++) {
minIndex = i;
for(j = i + 1; j < n; j++) {
if(prices[j] < prices[minIndex]) {
minIndex = j;
}
}
temp = prices[i];
prices[i] = prices[minIndex];
prices[minIndex] = temp;
}
}
// Insertion Sort
void insertionSort(float prices[], int n) {
int i, j;
float key;
for(i = 1; i < n; i++) {
key = prices[i];
j = i - 1;
while(j >= 0 && prices[j] > key) {
prices[j + 1] = prices[j];
j--;
}
prices[j + 1] = key;
}
}
// Display array
void display(float prices[], int n) {
int i;
for(i = 0; i < n; i++) {
printf("%.2f ", prices[i]);
}
printf("\n");
}
int main() {
float prices[SIZE] = {199.99, 49.50, 89.90, 299.00, 150.00};
int choice;
printf("Original Prices: ");
display(prices, SIZE);
printf("\nChoose sorting method:\n");
printf("1. Bubble Sort\n");
printf("2. Selection Sort\n");
printf("3. Insertion Sort\n");
printf("Enter your choice (1-3): ");
scanf("%d", &choice);
if(choice == 1) {
bubbleSort(prices, SIZE);
printf("\nPrices after Bubble Sort: ");
} else if(choice == 2) {
selectionSort(prices, SIZE);
printf("\nPrices after Selection Sort: ");
} else if(choice == 3) {
insertionSort(prices, SIZE);
printf("\nPrices after Insertion Sort: ");
} else {
printf("Invalid choice.\n");
return 0;
}
display(prices, SIZE);
return 0;
}
