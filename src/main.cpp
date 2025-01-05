#include "e-catalog.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ErrorCatalog errCatalog;

    errCatalog.add(1.2, "ERR_1");
    errCatalog.add(9.2, "ERR_1");
    errCatalog.add(2.3, "ERR_2");
    errCatalog.add(143.12, "ERR_1");
    errCatalog.add(3.4, "ERR_3");
    errCatalog.add(0.2, "ERR_1");

    errCatalog.printCatalog();

    return 0;
}
