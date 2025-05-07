# vector-modification-using-iterators
C++ Example: Modifying Vector Elements Using Iterators This code demonstrates how to modify vector elements in C++ using iterators. It shows how to replace elements using both iterators and direct index access. Perfect for understanding iterators and basic vector operations in C++.  #Cplusplus #Coding #Iterators #Vectors

  #include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names = {"sahil", "daan", "ayush", "dora"};

    // Using iterator to modify the second element (index 1)
    auto it = names.begin();
    it += 1;        // 'it' now points to "daan"
    *it = "sohail"; // Replacing "daan" with "sohail"

    // Modifying the element at index 2
    names[2] = "daniel";  // Replacing "ayush" with "daniel"

    // Printing the updated vector
    for (auto n : names) {
        cout << n << endl;
    }

    return 0;
}
