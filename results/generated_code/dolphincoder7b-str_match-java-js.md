Below is the JavaScript equivalent of the given Java code:

```JavaScript
let str = "abcd";
console.log(str.startsWith("ab")); // true
console.log(str.endsWith("zn")); // false
console.log(str.includes("bb"));  // false
console.log(str.includes("ab"));  // true

let loc1 = str.indexOf("bb");
console.log(loc1); // -1
let loc2 = str.indexOf("ab");
console.log(loc2); // 0
loc3 = str.indexOf("ab", loc2 + 1);
console.log(loc3); // 2
```
Note: The `endsWith` method is not supported by JavaScript out of the box, but you can implement it yourself using string slicing (`str.slice(-length)`). You also need to remove the parentheses around the variable assignments, as these are used for function calls in Java but not in JavaScript. Please let me know if there's anything else I can help with!
