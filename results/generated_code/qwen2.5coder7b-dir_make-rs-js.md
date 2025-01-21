In JavaScript, you can use the `fs` module from Node.js to create a directory and any missing parents using the `mkdirSync()` method. Here is how it could be done:

```javascript
const fs = require('fs');
const path = './path/to/dir';

try {
  fs.mkdirSync(path, { recursive: true });
} catch (err) {
  console.error('An Error Occured!', err);
}
```

This function creates the directory and any missing parents. If a directory already exists, it will not return an error and simply continue execution. The `recursive` option is important here as it allows you to create nested directories in one go.

Note: This code will only work in a Node.js environment. If you're running this in a browser or another non-Node.js JavaScript runtime, you'll need to use a different method for creating directories.
