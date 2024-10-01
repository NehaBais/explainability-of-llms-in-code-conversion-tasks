Here is the JavaScript equivalent of your C++ code:

```javascript
let original = "Mary had a X lamb.";
let toBeReplaced = "X";
let replacement = "little";

let newString = original.replace(toBeReplaced, replacement);

console.log("String after replacement: " + newString);
```

The `replace()` method in JavaScript replaces a specified value with another value in a string. It takes two parameters - the substring to be replaced and the replacement substring.
