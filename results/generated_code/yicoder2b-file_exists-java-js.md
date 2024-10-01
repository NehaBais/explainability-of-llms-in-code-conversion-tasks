The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');

console.log(fs.existsSync(`${__dirname}/input.txt`)); // current working directory
console.log(fs.existsSync('/docs/input.txt'));        // root filesystem directory
```
This code uses the built-in Node.js file system module (`fs`) to check if a file or directory exists in the current working directory and the filesystem root. The `__dirname` constant provides the directory of the currently executing script, and `${__dirname}/input.txt` is relative to that. Similarly, '/docs/input.txt' is an absolute path to "/docs" (which may not exist) followed by "input.txt". 

The function existsSync() checks if a file or directory exists synchronously - it doesn't support async operations like fs.exists() which returns a Promise or a function that gets called when the operation completes, and returns true if it finds the file/directory. It only checks for immediate existence of an existing path.
