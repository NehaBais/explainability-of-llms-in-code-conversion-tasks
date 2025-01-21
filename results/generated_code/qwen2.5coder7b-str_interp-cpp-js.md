Here is the JavaScript equivalent of your C++ code:

```JavaScript
var original = "Mary had a X lamb.";
var toBeReplaced = "X";
var replacement = "little";

// Use string's replace method
var newString = original.replace(toBeReplaced, replacement);
console.log("String after replacement: " + newString);
```

In JavaScript, we can use the `replace()` method of a string object to replace the specified value with another value. The `replace()` method returns a new string where some or all matches of a pattern are replaced by a replacement.
