#include "solution.h"

bool Solution::CheckBrackets(std::string input) {
   std::stack<char> mystack;
   bool result = true;
  for(auto x : input)
  {
    if(x == '(' || x == '[' || x == '{')
    {
      mystack.push(x);
    }

    if(x == ')')
    {
      if(mystack.top() != '(')
      result = false;
      else
      mystack.pop();
    }

    if(x == ']')
    {
      if(mystack.top() != '[')
      result = false;
      else
      mystack.pop();
    }

    if(x == '}')
    {
      if(mystack.top() != '{')
      result = false;
      else
      mystack.pop();
    }
    
  }
  if(mystack.empty() == false)
  result = false;
  
  return result;
}

