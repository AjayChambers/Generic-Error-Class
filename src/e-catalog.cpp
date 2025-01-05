#include "e-catalog.h"



/**************************************************************************
 *  @brief Adds an error (including the error's code & its tagname) to the
 *     abstract error catalog.
 *  @param code <float> - A float value that is used to enumerate, catalog
 *      and identify the error
 *  @param tagname <string> - A string value thats used to represent, and
 *      reference the error.
 * @return <bool> - Returns `true` if the error was successfully added to
 *    the catalog, otherwise `false` is returned.
 **************************************************************************/
bool ErrorCatalog::add(float code, string tagname)
{
    errors[code] = tagname;
    return true;
}



/**************************************************************************
 * @brief Removes an error from the abstract error catalog.
 * @param code <float> - The code of the error that is to be removed.
 * @return <bool> - Returns `true` if the error was successfully removed
 **************************************************************************/
bool ErrorCatalog::remove(float code)
{
    errors.erase(code);
    return true;
}



void ErrorCatalog::printCatalog()
{
    for (const auto& [key, value] : errors) {
        cout << key << ": " << value << endl;
    }
}
