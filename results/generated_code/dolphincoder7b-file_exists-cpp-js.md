Sure, here's the JavaScript version of your code:

```javascript
const fs = require('fs');
const path = require('path');
const { existsSync } = fs;

function fileExists(filePath) {
  console.log(`${filePath}:`);
  if (existsSync(filePath)) {
    const stats = fs.statSync(filePath);

    if (stats.isDirectory()) {
      console.log(" is a directory");
    } else {
      console.log(` exists with a file size of ${stats.size} bytes.`);
    }
  } else {
    console.log(" does not exist");
  }
}

fileExists('input.txt');
fileExists('zero_length.txt');
fileExists(path.resolve(__dirname, 'docs', 'input.txt'));
fileExists(path.resolve(__dirname, 'docs', 'zero_length.txt'));
```

Explanation: 
- The `fs` and `path` modules are needed to interact with the file system in Node.js.
- We use the `existsSync()` function from the `fs` module instead of `fs.existsSync()`. This is a more modern way of checking if a file exists, and it's recommended for newer versions of Node.js.
- The `fileExists()` function takes a file path as an argument and does what the original C++ code does - checks whether the file exists, then prints out whether it's a directory or has a size.
- To test this in your JavaScript environment, you can simply run the script with Node.js.
 
Note: This is a basic example. If you need to check for other types of files, like text files or images, or perform more complex operations on them, you would need to use different modules and functions from the `fs` and `path` modules in Node.js.
