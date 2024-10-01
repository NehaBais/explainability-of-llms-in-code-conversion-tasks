 In JavaScript, you can use the `replace()` method combined with a regular expression to achieve string interpolation. Here is how you would do this in your given C++ code translated into JavaScript:

```javascript
let original = "Mary had a X lamb.";
let toBeReplaced = "X";
let replacement = "little";
let newString = original.replace(new RegExp(toBeReplaced, 'g'), replacement);
console.log("String after replacement:", newString);
```
In this JavaScript code, `RegExp` is a regular expression object, and the `'g'` flag indicates global search which means it will replace all occurrences of the specified string.
