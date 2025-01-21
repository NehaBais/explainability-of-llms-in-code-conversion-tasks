var original = "Mary had a X lamb.";
var toBeReplaced = "X";
var replacement = "little";

// Use string's replace method
var newString = original.replace(toBeReplaced, replacement);
console.log("String after replacement: " + newString);
