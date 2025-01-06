# Generic Error Catalog Library

The "Generic Error Catalog" is a library with a couple different features
(or tools) that enable a developer to create a custom collection of errors
for a software project they are building with ease. This library's goal is
to allow the developer to handle exceptions without having to think to much
about the semantics, the organizing of errors, and the proper information to present to the user whenever an exception occurs &/or whenever an error is thrown.


## Error Codes
Error codes use a numeric value that is represented in a decimal format,
unsurprisingly, the type used for error codes is primitive `<float>` type.
When choosing an error code for an error its important to understand what
the numbers that you are assigning represent (or what meaning they hold).
In large part this will be determined by the developers creating the error
catalog, however, there is one important caveat to know before you start 
assigning your first error codes which I will cover in the next paragraph.

The Generic Error Catalog Library encodes errors using the universal base 10 decimal format because its already
decimal format uses decimal format is used to enumerate the errors because the decimal system gives us a way of organizing the errors into meaningful groups while to help categorize the errors  into meaningful groups. The error code format can be described as a pair of numbers separated by a decimal point (for example, 3.12, 31.2, 310.2). When it comes to numbering errors, there are some standards in place, as well as constant numbering systems defined by some open source projects and companies. The most common example of this being [RFC-9110]("https://developer.mozilla.org/en-US/docs/Web/HTTP/Status").



 , the secondd and the integer portion of the number is used to represent the error group and the decimal portion is used to represent a specific error within the group. Using `3.1` as an example, the integer part `3` might represent a `FILE_ERROR` which would be code `3.0`, and the '.1' portion of the 3.1 would give a more specific file-error, which might be something like `FILE_DOES_NOT_EXIST`, or it could be `FILE_NOT_FOUND`.





## Error Catalog
  - Generic Errors
  - Customization of an Error Group
  - Customization of an Individual Error
  - Error Containers
  - Unique Enumeration of Errors