#include <ext/rope>
#include <iostream>

// SGI extension
using namespace __gnu_cxx;
using namespace std;

int main() {
    crope r = "Hello I love cropes so much!";
    cout << "Original Rope: " << r << endl << endl;

    cout << "Character at index 6: " << r.at(6) << endl << endl;

    r.insert(22, " so");
    cout << "Rope after inserting so: " << r << endl << endl;

    r.erase(0, 6);
    cout << "Rope after deleting Hello: " << r << endl << endl;

    return 0;
}
