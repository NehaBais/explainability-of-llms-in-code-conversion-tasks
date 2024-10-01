
Here's the JavaScript code for the given C code:

```js
const startsWith = (container, target) => {
  const clen = container.length;
  const tlen = target.length;

  if (clen < tlen) {
    return false;
  }

  return container.slice(0, tlen) === target;
};

const endsWith = (container, target) => {
  const clen = container.length;
  const tlen = target.length;

  if (clen < tlen) {
    return false;
  }

  return container.slice(clen - tlen) === target;
};

const doesContain = (container, target) => {
  return container.includes(target);
};

// Test cases:
console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
```
Note that the `strncmp` function in C is not available in JavaScript. Instead, we use the `slice()` method to compare the first few characters of the string. The `includes()` method is used for the third function.
