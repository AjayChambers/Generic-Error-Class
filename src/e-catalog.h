/**************************************************************************
 * @file err-group.h
 * @brief Class for keeping track of error codes and their corresponding
 *    tag names.
 **************************************************************************/

#ifndef E_CATALOG_H
#define E_CATALOG_H

#include <iostream>
#include <map>

using namespace std;

class ErrorCatalog {
   private:
    // Catalog Container
    map<float, string> errors;

    protected:
    // Catalog Iterators
    map<float, string>::iterator front  = errors.begin();
    map<float, string>::iterator back = errors.end();

   public:
    bool add(float, string);
    bool remove(float);
    void printCatalog();

        /*


*************************
TEMPORARY
*************************/
    void printIds();



        //



   public:
    ErrorCatalog() = default;
};



#endif // E_CATALOG_H
