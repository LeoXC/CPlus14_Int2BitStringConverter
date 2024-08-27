# Generating Bit String from Unsigned Integer (for C++ 14.0)

It is a sample program generaitng Bit String from Unsigned Integer (hardcoded in program), 
```
unsigned int myInt = 255;    // 4 bytes
```

in tree ways:
- using std::bitset
- using table and rest of division (n%2) and cutting the last bit with math operation (n/2)
- using table and mask moving left bit operation <<

Exec created For MacOS: clang++ (g++)

```
clang++ -v
g++ -v
	Apple clang version 14.0.0 (clang-1400.0.29.202)
	Target: x86_64-apple-darwin21.6.0
```
