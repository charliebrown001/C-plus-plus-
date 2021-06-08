#include<iostream>

#include <string>

using namespace std;
int main() {
  string s;
  cout << "Enter string:";
  getline(cin, s);
  s += " NULL";
  int i, j, k, m = 0;
  j = 0;
  for (i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      if ((i - j) <= 4 && (i - j) >= 0) {
        for (k = j; k < i; k++) {
          cout << s[k];
        }
      } else if ((i - j) > 4) {
        m = i - 1;
        while (m >= j && m < i) {
          cout << s[m];
          m--;
        }

      }
      j = i + 1;
      cout << " ";
    }
  }
}
