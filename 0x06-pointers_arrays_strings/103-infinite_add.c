#include "main.h"
#include "string.h"

char * infinite_add(char * n1, char * n2, char * r, int size_r) {
  int len1 = strlen(n1);
  int len2 = strlen(n2);
  int carry = 0;
  int sum;

  if (len1 > size_r || len2 > size_r) {
    return 0; // Result cannot be stored in r
  }

  int i = len1 - 1;
  int j = len2 - 1;
  int k = size_r - 1;

  r[k] = '\0'; // Null-terminate the result string

  while (i >= 0 || j >= 0) {
    int digit1 = (i >= 0) ? n1[i] - '0' : 0;
    int digit2 = (j >= 0) ? n2[j] - '0' : 0;

    sum = digit1 + digit2 + carry;
    carry = sum / 10;
    r[k] = (sum % 10) + '0';

    i--;
    j--;
    k--;
  }

  if (carry > 0) {
    if (k == 0) {
      return 0; // Result cannot be stored in r
    }

    r[k] = carry + '0';
  }

  return r;
}
