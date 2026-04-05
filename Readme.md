#KEY CONCEPTS AND ANALOGIES
### Namespaces & the "The Front Street" Collisions 
## The Problem: 
-In a large program, two different libraries must use the same  name for a function or variable. This creates nameing collisions

## The Analogy:
-Imagine you are invited to "245 Front street" If the city has two different  "Front streets." you are lost. Even if they are mile apart without a unique identifier, the address is ambigous
## The C++ Solution:
-we use Namespaces(The city name) and the Scope REsolution Operator(::) to tel the GPS exactly where to go
   -Nairobi::FrontStreet Vs Mombasa::FrontStreet
   -std::cout (The cout that lives in the Standard city).