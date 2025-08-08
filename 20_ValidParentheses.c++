class Solution {
  public:
      bool isValid(string s) {
          stack<char> stack;
          for (char c : s) {
              if (c == '(' || c == '{' || c == '[') {
                  stack.push(c);
              } else {
                  if (stack.empty() ||
                      (c == ')' && stack.top() != '(') ||
                      (c == '}' && stack.top() != '{') ||
                      (c == ']' && stack.top() != '[')) {
                      return false;
                  }
  
                  // Quitamos el tope ya que está correctamente balanceado
                  stack.pop();
              }
          }
          return stack.empty();
      }
  };