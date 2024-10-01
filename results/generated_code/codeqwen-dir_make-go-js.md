In JavaScript, you can use the `fs.mkdir()` function provided by Node.js's built-in 'fs' (file system) module to achieve the same result as your Go code snippet. Here is an equivalent implementation:

```javascript
const fs = require('fs').promises;

async function createDirectory(path, mode) {
  try {
    await fs.mkdir(path, { recursive: true });
  } catch (err) {
    if (err.code !== 'EEXIST') throw err;
  }
}

createDirectory('./path/to/dir', 0o770);
```

Please note that Node.js's `fs.mkdir()` function returns a promise, which allows you to use async/await for error handling in a more structured way than the callback approach used in the Go code. You also have to pass an options object with `recursive: true` if you want to create missing directories along the path. The mode parameter is not required in this function and its default value is 0o777, which means rwxrwxrwx for all users.
