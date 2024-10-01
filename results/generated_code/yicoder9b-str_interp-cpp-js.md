Here is the equivalent JavaScript code for your C++ program. Note that JS doesn't have a built-in function like replace() in C++, so we can use the split() and join() method to replace a part of string.

```javascript
let original = "Mary had a X lamb."; 
let toBeReplaced = "X" ; 
let replacement  = "little" ;

original = original.split(toBeReplaced).join(replacement);
console.log(`String after replacement: ${original}`);
```
