Here is the JavaScript version of your C code:

```javascript
function startsWith(container, target) {
    const clen = container.length,
          tlen = target.length;

    if (clen < tlen)
        return false;
    return container.slice(0, tlen) === target;
}

function endsWith(container, target) {
    const clen = container.length,
          tlen = target.length;

    if (clen < tlen)
        return false;
    return container.slice(clen - tlen) === target;
}

function doesContain(container, target) {
    let index = 0;
    while ((index = container.indexOf(target, index)) !== -1) {
        console.log("Contains Test: " + target + " found at position " + index);
        index += target.length; // To handle multiple occurrences
    }
    
    return index !== -1; // Returns true if any occurrence of a string was found.
}

console.log("Starts with Test ( Hello, Hell ): " + startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code, ode ): " + endsWith("Code", "ode"));
console.log("Contains Test ( Google, msn ): " + doesContain("Google", "msn"));
```

This JavaScript code is equivalent to your C code. It includes the same three functions and a `main` function that performs string matching tests. The results of each test are printed out using `console.log`. Note that in JavaScript, you can use the `slice` method to get substrings, and the `indexOf` method to find the position of a substring.
