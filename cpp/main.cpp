/**
 * CrypTools - GitHub
 * Friday, 8 February 2019 
 * ATBASH Cipher C++ Implementation
 * How to use:
 *  Just write your input text and press enter / return.
 *  Decrypting and encrypting is the same process.
 */

#include <cstring>
#include <iostream>

#define MAX_INPUT_LENGHT \
  2147000  // small values causes bugs for obscure reasons around the end of the
           // for-loop
// ASCII VALUES LATIN ALPHABET
#define MINCAP 65
#define MAXCAP 90
#define SPACE  32
#define MINLOW 97
#define MAXLOW 122

using namespace std;

bool crypt(const char* input, char* result);

int main() {
  char input[MAX_INPUT_LENGHT], result[MAX_INPUT_LENGHT];
  cout << "Input: ";
  cin.getline(input, MAX_INPUT_LENGHT);

  if (crypt(input, result) == true) {
    cout << endl << "Result: " << result << endl;
    return 0;
  } else {
    cout << endl << "Non-alphabet input" << endl;
    return 1;
  }
}

bool crypt(const char* input, char* result) {
  for (unsigned int i = 0; i < strlen(input); ++i) {
    if (input[i] == SPACE) {
      result[i] = SPACE;
    } else if ((input[i] >= MINLOW) && (input[i] <= MAXLOW)) {
      result[i] = MAXLOW - (input[i] - 97); //97 - MINLOW
    } else if ((input[i] >= MINCAP) && (input[i] <= MAXCAP)) {
      result[i] = MAXCAP - (input[i] - 65); //65 - MINCAP
    } else
      return false;
  }
  return true;
}
