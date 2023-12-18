#include <iostream>

using namespace std;

string concatenate_strings(string A, string B)
{
    return B + A;
}

int main()
{

    string A, B;
    cin >> A;
    cin >> B;

    string concatenated_string = concatenate_strings(A, B);
    cout << concatenated_string << endl;

    return 0;
}
