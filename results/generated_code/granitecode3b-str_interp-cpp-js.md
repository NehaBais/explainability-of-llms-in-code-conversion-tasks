Here's the equivalent JavaScript code for the given C++ code snippet:
```
const original = "Mary had a X lamb."
const toBeReplaced = "X"
const replacement = "little"
const newString = original.replace(original.indexOf(toBeReplaced), toBeReplaced.length, replacement)
console.log(`String after replacement: ${newString}`)
```
In this JavaScript code, we first define the original string, the character sequence that needs to be replaced (toBeReplaced), and the value that will replace it (replacement). Then, we use the `replace()` method on the original string to perform the interpolation. The `replace()` method takes three arguments: the index at which to start replacing, the length of the sequence to replace, and the replacement string. In this case, we are using the index returned by `original.indexOf(toBeReplaced)` (which is 12 in this example) and passing the length of `toBeReplaced` (which is 1) as well as the replacement string.
Finally, we use template literals to output the result to the console.

