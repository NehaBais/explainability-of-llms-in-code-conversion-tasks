Sure, here is the equivalent JavaScript code for the given Python code:

```javascript
function mkdirp(path) {
  fs.mkdirSync(path, { recursive: true });
}
```

This code uses Node's built-in filesystem (`fs`) module which has a `mkdirSync` function that creates a directory and any parent directories if they do not already exist. The option `{ recursive: true }` tells the function to create all necessary parent directories as well. If the directory specified by the path already exists, the function will return without error.
