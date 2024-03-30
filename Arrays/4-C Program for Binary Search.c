//C Program for Binary Search
#include <stdio.h>

int binsearch(int arr[], int, int, int);

int main(){

    int arr[10] = {-45, -14, -1, 0, 1, 5, 17, 39, 99, 187};
    int target, question;

    printf("WHat number are you looking for: ");
    scanf("%d", &question);

    target = binsearch(arr, 0, 9, question);

    if (target == -1)
    {
        printf("The number you are searching isn't in the array!");
    }
    else
    {
        printf("%d is the %dth element of the array!", question, target);
    }
}

int binsearch(int arr[], int left, int right, int question) {

    while (left <= right) {

        int mid = left + (right - left) / 2;
        if (arr[mid] == question) {
            return mid+1;
        } else if (arr[mid] < question) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}