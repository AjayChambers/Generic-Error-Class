#include "gen-err-lib.cpp"

using namespace std;


int main()
{
    GenericError::Error err(1, "This is a problem", "This is a solution");

    cout << err.what() << endl;

    return 0;
}
