Here is the equivalent JavaScript code:
```
const fs = require('fs');
const path = require('path');

function mkdirRecursive(dir) {
  const stat = fs.statSync(dir);
  if (stat && !stat.isDirectory()) {
    throw new Error(`${dir} is not a directory`);
  }
  
  const parentDir = path.dirname(dir);
  if (!fs.existsSync(parentDir)) {
    mkdirRecursive(parentDir);
  }
  
  fs.mkdirSync(dir, { recursive: true });
}
```
This code uses the `fs` and `path` modules from Node.js to interact with the file system. The `statSync()` function is used to check if a directory exists and its mode, while the `existsSync()` function is used to check if a parent directory exists. The `mkdirSync()` function is used to create a directory recursively using the `recursive` option.

The code first checks if the provided path is a directory by calling `fs.statSync(dir)` and checking its mode with `!stat.isDirectory()`. If it's not a directory, an error is thrown.

Then, the code calls `path.dirname(dir)` to get the parent directory of the provided path, and checks if it exists using `fs.existsSync(parentDir)`. If it doesn't exist, the function recursively calls itself on the parent directory until it finds a directory that already exists.

Finally, the code creates the provided directory using `mkdirSync(dir, { recursive: true })` and sets the `recursive` option to `true` to create all missing parents.
