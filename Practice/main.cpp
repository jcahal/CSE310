#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3){
        cout << "Foo" << endl;
    }

    cout << argv[1] << endl;
    return 0;
}