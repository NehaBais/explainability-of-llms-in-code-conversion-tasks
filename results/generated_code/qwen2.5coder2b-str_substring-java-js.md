Sure, here is the JavaScript equivalent of your Java code:

```javascript

function substring(str, n, m) {
  if (m === undefined || m < 0) {
    throw new Error("Invalid value for 'm'");
  }
  return str.substring(n, n + m);
}

function substring(str, n) {
  if (n === undefined || n < 0 || n >= str.length) {
    throw new Error("Invalid value for 'n'");
  }
  return str.substring(n);
}

function substring(str) {
  return str.substring(0, str.length - 1);
}

function substring(str, c, m) {
  if (c === undefined || c < 0 || str.indexOf(c) === -1) {
    throw new Error("Invalid character 'c'");
  }
  let index = str.indexOf(c);
  return str.substring(index, index + m + 1);
}

function substring(str, sub, m) {
  if (sub === undefined || sub.length === 0 || str.indexOf(sub) === -1) {
    throw new Error("Invalid string 'sub'");
  }
  let index = str.indexOf(sub);
  return str.substring(index, index + m + 1);
}
```

These JavaScript functions work the same way as your Java functions. They take a string and two parameters: `n` (start position), `m` (number of characters to extract), and optionally, `c` or `sub`. The function uses JavaScript's built-in `substring` method to return the requested substring. If any input values are invalid, an error is thrown.
