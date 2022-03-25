#include <iostream>

using namespace std;
int size_of_variable_star_t()
{
    // making pointer
    int a, *p;
    // storing malue of a in p
    p = &a;
    int *t = new int;
    return sizeof(t);
}
int main()
{
    cout << size_of_variable_star_t();
    return 0;
}