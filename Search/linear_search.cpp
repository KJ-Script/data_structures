#include <stdio.h>
#include <iostream>

using namespace std;

int main (void) {
    int numbers[] = {20, 50, 80, 110, 140, 170, 200};
    int n;
    cout<<"Enter the number you want to search: ";
    cin>>n;
    for (int i = 0; i < 7; i++) {
        // if you want to compare strings use strcmp from the built in string.h lib
        if (numbers[i] == n) {
            printf("Found designated number");
            return 0;
        }
    }
    printf("Havent found the designated number\n");
}