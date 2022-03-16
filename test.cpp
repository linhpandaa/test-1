#include "lib.h"
#include <iostream>
using namespace std;

bool test01()   // test vi du (issue #1)
{
    vector<int> v {1, 6, 2, 3, 5, 2, 6, 1, 3};
    return maxEven(v) == 6;
}

bool test02()   // test empty vector
{
    vector<int> v {};
    return maxEven(v) == -1;
}

bool test03()   // test vector length = 1
{
    vector<int> v {3};
    return maxEven(v) == -1;
}

bool test04()   // test vector length = 1, even exists
{
    vector<int> v {2};
    return maxEven(v) == 2;
}

bool test05()   // test vector length > 1, no exist even numbers
{
    vector<int> v = {1, 3, 5, 1, 3};
    return maxEven(v) == -1;
}

bool test06()   // test vector length > 1, exist even numbers
{
    vector<int> v = {1, 2, 8, 2, 3, 50, 7, 1, 3};
    return maxEven(v) == 50;
}

int main()
{
    if (test01() && test02() && test03() && test04() && test05() && test06())
        cout << "Test passed!" << endl;
    else
        cout << "Test failed!" << endl;
    return 0;
}
