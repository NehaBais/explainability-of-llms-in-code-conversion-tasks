```
Answer :

function replaceString() {
// Get elements from HTML
let original = document.getElementById("original").value;
let toBeReplaced = document.getElementById("toBeReplaced").value;
let replacement = document.getElementById("replacement").value;
// Convert the inputted values into strings
let newString = original.replace(toBeReplaced, replacement);
// Output results to HTML
document.getElementById("output").innerHTML = "String after replacement: " + newString;
}
```
