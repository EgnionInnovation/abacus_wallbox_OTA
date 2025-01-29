#ifndef Ndef_h
#define Ndef_h

/* NOTE: To use the Ndef library in your code, don't include Ndef.h
   See README.md for details on which files to include in your sketch.
*/

#include <Arduino.h>

#undef NULL
#define NULL 0  // Define NULL as a plain 0 for C++ compatibility

// #define NULL (void *)0

void PrintHex(const byte *data, const long numBytes);
void PrintHexChar(const byte *data, const long numBytes);
void DumpHex(const byte *data, const long numBytes, const int blockSize);

#endif