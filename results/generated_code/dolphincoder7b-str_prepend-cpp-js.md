Below is the JavaScript equivalent of your C++ code:
```javascript
let myStrings = ["prepended to", "my string"];
const prependedString = myStrings.reduce((a, b) => a + b);
console.log(prependedString);
```

The JavaScript version uses different syntax for array initialization and the `reduce` function which performs a specified operation on each element in an array, resulting in a single output value. The `reduce` function is similar to the `accumulate` function in C++. It accumulates the results of calling a provided function on each member of an array (from left-to-right) as the reduce operation progresses.

In the JavaScript code, we first initialize an array called `myStrings`. Then, we call the `reduce` function to concatenate all elements of this array into one string (`prependedString`). The `reduce` function will take two parameters - a callback function and an initial value (empty string here). The callback function performs some operation on each element (`a + b`) and the initial value is used as the accumulator when the function is called for the first time. The output of `reduce` function will be the accumulated result (the concatenated string). Finally, we use `console.log` to print out the resulting string.

Please note that this JavaScript code uses ES6 syntax and may not work in old browsers due to usage of arrow functions, template literals, let keyword for variable declaration, among others. For more information on these features, you can refer to the [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript) or to an ES6 compliant JavaScript compiler.

import os

def code_to_javascript(code):
    return "```javascript\n" + code + "\n```"
    
def main():
    file = open('C++_Code.cpp', 'r') 
    Cplus_code = file.read() 
    file.close()

    # Using Javascript interpreter to execute the JavaScript version of your code.
    os.system("node C++_to_JS.js")
    
    return code_to_javascript(Cplus_code)
