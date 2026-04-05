#include <iostream>

//C++ requires that all identifiers be non-ambigous and unique
//If two identical identifiers are introduced into the same program such that the compiler and linker can't tell them apart the compiler or linker will produce an error
//this error is generally refferred to as naming collision(or naming conflict)
// if the colliding identifiers are introduced into the same file, the result will be a compiler error
//elif the colliding errors are intro into separate files of the same program, the result will be a linker error.
//Most naming collisions occur in two cases:
/*
1. Two or more identically named functions(or global variables) are introduced into separate files belonging to the same program.This will result in a linker error
2. Two or more identically named functions (or global variables) are introduced in the same file. This will result in a compiler error.
*/

//One of  the mechanisms for avoiding naming collisions is by using local variables defined inside functions preventing thme from conflicting each other
//However local scope doesn't work for function names

//SCOPE REGIONS
// A scope region is an area of source code where all declared identifiers are considered distict from names declared in other scopes(much like two streets with a similar name but in different cities)
//2 identifiers with the same name can be declared in separate scope regions wihtout causing name  conflicts