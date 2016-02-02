#include <iostream>
#include <array>

using namespace std;

//Function Prototypes

void print(int a[], int n){
    int i = 0;

    cout << "{";
    while(i < n) {
        cout << a[i] << ",";
        i++;
    }
    cout << "}" << endl;
}

// given a array of type int will return a sorted list
void insertionSort(int a[], int n) {

    int key, i, j;

    if (n == 1) { // array of length 1 is already sorted
        print(a, n);
    }else {
        for(i = 1; i < n; i++){
            key = a[i];

            //cout << "i: " << i << "value: " << a[i] << endl;
            //cout << "key: " << key << endl;

            j = i - 1;
            //cout << "j: " << j << a[j] << endl;

            //swap elements until in order
            while((j >= 0) && (a[j] > key)){

                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
        print(a, n);
    }
}

int main() {
    cout << "Insertion Sort Example" << endl;

    int a[] = {5,4,3,2,1};

    cout << sizeof(a)/sizeof(int) << endl;

    cout << "Unsorted: ";
    print(a, 5);

    cout << "Sorting: ";
    insertionSort(a, 5);

    return 0;
}