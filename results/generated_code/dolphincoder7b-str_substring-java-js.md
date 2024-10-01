The JavaScript version of the given Java code is as follows:
```
function Substring(str, n = 0, m) {
  if (n > str.length || !m) {
    return str;
  } else if (!m) {
    return str.slice(n);
  } else {
    return str.slice(n, n + m);
  }
}
function Substring(str, n) {
  if (n < 0 || n > str.length) {
    throw new Error('Index out of bounds');
  }
  return str.slice(n);
}
function Substring(str) {
  return str.slice(0, -1);
}
function Substring(str, c, m) {
  const start = str.indexOf(c);
  if (start === -1) {
    throw new Error('Invalid character');
  }
  let end;
  if (!m) {
    end = str.length;
  } else {
    end = start + m + 1;
  }
  return Substring(str, start, end - start);
}
function Substring(str, sub, m) {
  const start = str.indexOf(sub);
  if (start === -1) {
    throw new Error('Substring not found');
  }
  let end;
  if (!m) {
    end = str.length;
  } else {
    end = start + m + 1;
  }
  return Substring(str, start, end - start);
}
```
This JavaScript code uses several features of ES6 that are not supported by some older browsers and environments: arrow functions (`() => {}`), template literals (``` `), destructuring assignment (`const [a, b] = array`), default parameter values (`function(a, b=1) { ... }`), etc. If you need to support older browsers or environments, you'll need to compile your code using a transpiler like Babel, and ensure it runs on the required environments.
Please note that in JavaScript, strings are immutable and cannot be modified after they have been created. The `slice` method returns a new string rather than modifying the original one.
