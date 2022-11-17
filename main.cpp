#include <iostream>
#include "Problem3.h"

using namespace std;

int main()
{
    cout << "The number of \"words\" that contain only letters: " << threeA() << endl;
    cout << "Shortest pangram: " << threeB() << endl;
    cout << "Number of valid dictionary words that don't contain first letter of first name: " << threeC() << endl;
}
