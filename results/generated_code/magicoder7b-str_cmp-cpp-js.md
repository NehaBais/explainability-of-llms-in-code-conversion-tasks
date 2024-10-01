 The JavaScript equivalent of the C++ code would look like this:

```javascript
function demoCompare(a, b) {
  console.log(a + ' and ' + b + ' are ' + ((a === b) ? '' : 'not ') + 'exactly lexically equal.');
  
  console.log(a + ' and ' + b + ' are ' + ((a !== b) ? '' : 'not ') + 'lexically unequal.');
  
  console.log(a + ' is ' + ((a < b) ? '' : 'not ') + 'lexically ordered before ' + b + '.');
  
  console.log(a + ' is ' + ((a > b) ? '' : 'not ') + 'lexically ordered after ' + b + '.');
}

let a = process.argv[2] || "1.2.Foo";
let b = process.argv[3] || "1.3.Bar";
demoCompare(a, b);

// Case-insensitive comparisons by folding both strings to a common case.
let c = a.toLowerCase();
let d = b.toLowerCase();
demoCompare(c, d);

// Numeric comparisons; here 'double' could be any type for which the
// relevant >> operator is defined, eg int, long, etc.
let numA = parseFloat(a);
let numB = parseFloat(b);
demoCompare(numA, numB);
```

You would run this script from a terminal or command prompt using node like so: `node demoCompare.js "1.2.Foo" "1.3.Bar"` replacing the arguments as needed. The `process.argv` object in JavaScript provides access to the command line arguments passed when the program is executed, and `process.argv[2]`/`process.argv[3]` get the second (`a`) or third (`b`) argument from those provided by the user. 

In JavaScript, unlike C++, there's no need for explicit type declarations (like `T` in template in C++), hence function parameters are of type `any`, but you can ensure types using TypeScript if needed. Also, JavaScript does not have a direct equivalent to `#include <algorithm>` or `<iostream>` from C++, but the methods used in the function `demoCompare()` are native JavaScript methods like `console.log()`, `toLowerCase()`, and `parseFloat()`.
