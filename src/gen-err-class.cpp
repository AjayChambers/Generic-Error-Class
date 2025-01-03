/****************************************************************
    Copyright 2025 Andrew Jay Chambers Jr

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing,
  software distributed under the License is distributed on an
  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
  either express or implied. See the License for the specific
  language governing permissions and limitations under the
  License.
*****************************************************************/

#include "gen-err-class.h"


using namespace std;

namespace GenericError
{
    /*********************************************************************
     * @class Error
     * @brief The base class used by the 'Generic Error Library'
     * @param message Message to print when the error is thrown
     *********************************************************************/
    Error::Error(const string message) { this->message = message; }


    /*********************************************************************
     * @class Error
     * @brief The base class used by the 'Generic Error Library'
     * @param code A unique code used to identify the error.
     * @param problem The root cause of the error. The error will add the
     *     `problem` string to `Error::message` when it is thrown.
     * @param suggestion Suggested fix for the error. Often times this
     *     includes the first steps to take when troubleshooting the
     *     error.
     *********************************************************************/
    Error::Error(int code, string problem, string suggestion)
    {
        this->code       = code;
        this->problem    = problem;
        this->suggestion = suggestion;
        this->id         = __func__;

        messageFmt();
    };

    void Error::messageFmt()
    {
        string codeString = to_string(code);

        message =
              "\n\n\n\n\tAN ERROR HAS OCCURRED\n\n"
              "  Error ID: " + id + " (#" + codeString + ")\n\n"
              "  * " + problem + "\n\n"
              "  * " + suggestion + "\n\n";
    };

    const char* Error::what() const noexcept { return message.c_str(); }
} // namespace GenericError
/*


    #include <iostream>
    #include <string>

    void eFormat(
            string& original,
            const string& to_replace,
            const string& replacement)
    {
        size_t pos = original.find(to_replace);

        if (pos != string::npos) {
            original.replace(pos, to_replace.length(), replacement);
        }
    }

    int main() {
        string str = "Hello, World!";
        eFormat(str, "World", "C++");

        cout << str << endl; // Output: Hello, C++!
        return 0;
    }



    */
