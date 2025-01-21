 Here's the equivalent JavaScript code for the given C code. This code performs the same three types of string matching and includes optional requirements to print the location of matches or handle multiple occurrences.

```javascript
function startsWith(container, target) {
  const clen = container.length;
  const tlen = target.length;
  if (clen < tlen) return false;
  return container.substring(0, tlen) === target;
}

function endsWith(container, target) {
  const clen = container.length;
  const tlen = target.length;
  if (clen < tlen) return false;
  return container.substring(clen - tlen) === target;
}

function doesContain(container, target) {
  return container.includes(target);
}

function printMatchLocation(container, target) {
  const index = container.indexOf(target);
  if (index !== -1) {
    console.log(`"${target}" found at index ${index} in "${container}"`);
  } else {
    console.log(`"${target}" not found in "${container}"`);
  }
}

function handleMultipleOccurrences(container, target) {
  let index = container.indexOf(target);
  while (index !== -1) {
    console.log(`"${target}" found at index ${index} in "${container}"`);
    index = container.indexOf(target, index + 1);
  }
}

console.log("Starts with Test ( Hello, Hell ) :", startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code, ode ) :", endsWith("Code", "ode"));
console.log("Contains Test ( Google, msn ) :", doesContain("Google", "msn"));

printMatchLocation("Google", "o"); // Optional: Print location of a single match
handleMultipleOccurrences("Hello World, Hello Universe", "Hello"); // Optional: Handle multiple occurrences
```

### Explanation:
1. **startsWith**: Checks if the `container` starts with `target`. It uses substring comparison to check if the first part of `container` matches `target`.
2. **endsWith**: Checks if the `container` ends with `target`. It also uses substring comparison but focuses on the end of the string.
3. **doesContain**: Uses JavaScript's built-in `includes` method to determine if `container` contains `target`.
4. **printMatchLocation**: Finds and prints the first occurrence of `target` in `container` and its index.
5. **handleMultipleOccurrences**: Finds and prints all occurrences of `target` in `container` by repeatedly calling `indexOf` to find subsequent matches starting from the last found position.

This JavaScript code mirrors the functionality of the provided C code, including handling multiple occurrences as an optional feature.
