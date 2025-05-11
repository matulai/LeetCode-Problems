class Solution {
  public:
      string romansNum[7] = {"I", "V", "X", "L", "C", "D", "M"};
  
      int romanToInt(string s) {
          int sum = 0;
          for (int i = 0; i < s.length(); i++) {
              int actual = simpleRomanToInt(s[i]);
              if (next(s, i) > simpleRomanToInt(s[i])) {
                  sum += (next(s, i) - actual);
                  i++;
              } else {
                  sum += actual;
              }
          }
          return sum;
      }
  
      int next(string s, int index) {
          if ((s.length() - 1) >= (index + 1)) {
              return simpleRomanToInt(s[index + 1]);
          } else {
              return 0;
          }
      }
  
      int simpleRomanToInt(char s) {
          int value;
          switch (s) {
              case 'I':
                  value = 1;
                  break;
              case 'V':
                  value = 5;
                  break;
              case 'X':
                  value = 10;
                  break;
              case 'L':
                  value = 50;
                  break;
              case 'C':
                  value = 100;
                  break;
              case 'D':
                  value = 500;
                  break;
              case 'M':
                  value = 1000;
                  break;
          }
          return value;
      }
  };