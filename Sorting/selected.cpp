#include <iostream>


using namespace std;


int main(void) {
    int unsorted[] = {5, 4, 6, 8, 2, 10};

    // time to sort
    int l = 6;
    for (int k=0; k<l; k++){
        // (int k=0; k<l-1; k++) for bubble sort
        for (int i=0; i<l; i++) {
            // (int i=0; i<l-2; i++) for bubble sort
            if (unsorted[i] > unsorted[i+1]) {
                int t = unsorted[i];
                unsorted[i] = unsorted[i+1];
                unsorted[i+1] = t;
            }
        }
    }
        cout<<"Array: ";
        for (int j=0; j<6; j++) {
            cout<<unsorted[j]<<", ";
        }
        cout<<endl;

}