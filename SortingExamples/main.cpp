#include <iostream>

using namespace std;

//================= Prototypes ====================//
void length(int a[]);

void print(int a[], int n);

//int[] copyArray(int a[]);

void insertionSort(int a[], int n);

void mergeSort(int a[], int n);

//================= Main ====================//
int main() {
    int state;
    char terminator = 'y';
    int a[] = {5,4,3,2,1,7};

    cout << "Unsorted Array: ";
    print(a, 5);
    length(a);
    cout << sizeof(a) << endl;
    cout << sizeof(int) << endl;

    cout << "Sort Options:" << endl;
    cout << "1. Insertion Sort" << endl;
    cout << "2. Merge Sort" << endl;
    while( cin >> state && terminator == 'y') {
        switch (state) {
            case 1:
                insertionSort(a, 5);
                break;
            case 2:
                mergeSort(a, 5);
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
        cout << "Continue? (y/n)";
        cin >> terminator;
    }

    return 0;
}


//================= Functions ====================//
void length(int a[]){

    cout << ((sizeof(a)*3)-4) << endl;
    cout << sizeof(int) << endl;
    //int result = (sizeof(a)/sizeof(int));

    //return result;
}


void print(int a[], int n){
    int i = 0;

    cout << "{";
    while(i < n) {
        cout << a[i] << ",";
        i++;
    }
    cout << "}" << endl;
}

/*
int copyArray(int* a[]){
    int b[length(a)];
    for(int i = 0; i < length(a); i++){
        b[i] = a[i];
    }

    return b[];
}
*/

// given a array of type int will return a sorted list
void insertionSort(int a[], int n) {

    cout << "Insertion Sort it is" << endl;

    int key, i, j;

    if (n == 1) { // array of length 1 is already sorted
        print(a, n);
    }else {
        for(i = 1; i < n; i++){
            key = a[i];

            cout << "index: " << i << endl;
            cout << "key: " << key << endl;

            j = i - 1;

            //swap elements until in order
            while((j >= 0) && (a[j] > key)){

                cout << "Array state before swap: ";
                print(a, n);
                cout << "Swap, " << a[j + 1] << " for, " << a[j] << endl;

                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
            cout << "Array state after swap: ";
            print(a, n);
        }
        cout << "Sorted array: ";
        print(a, n);
    }
}

void mergeSort(int a[], int n){
    cout << "Not yet implemented" << endl;
}