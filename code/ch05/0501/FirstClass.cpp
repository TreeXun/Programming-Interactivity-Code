// first import our header file#include "FirstClass.h"// then import the file that contains the 'print' method#include <iostream>// this is our constructor for the FirstClass objectFirstClass::FirstClass(){    // this is a little magic to get something printed    // to the screen    printf(" FirstClass \n");    classProperty = 1; // initialize our property}int FirstClass::howManyClasses(){    // once again, just a little message to say 'hello'    printf(" howManyClasses method says: 'just one class' \n");    // note that we're returning classProperty, take a look at the method    // declaration to understand why we're doing this (hint, it says 'int')    return classProperty; // do something else with our property}