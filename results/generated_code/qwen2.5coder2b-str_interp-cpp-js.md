The equivalent code in JavaScript would be:

```javascript
let original = 'Mary had a X lamb.';
let toBeReplaced = 'X';
let replacement = 'little';

let newString = original.replace('X', replacement);
console.log("String after replacement: " + newString); 
```

This uses the `replace` method of JavaScript strings, which takes two arguments: the pattern and the replacement. In this case, it replaces the character sequence 'X' in the string with the value 'little'.
