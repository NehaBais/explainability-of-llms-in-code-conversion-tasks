JavaScript doesn't have an exact equivalent of Java's `java.io.File` class, so we can use NodeJS built-in modules to handle file and directory operations. 

Here is how you would do it in JavaScript using the "fs" module from Node.js:
```javascript
const fs = require('fs');

function checkExists(filePath) {
    return fs.existsSync(filePath);
}

// Checking for current working directory and file/directory at root of filesystem
console.log(checkExists("docs/input.txt"));  // Current Working Directory
console.log(checkExists("/docs/input.txt"));  // File and directory in the filesystem root
```
In this code:
- We require 'fs' module to interact with the file system.
- A function `checkExists` is created which takes a `filePath` as an argument, then returns if the specified path exists or not.
- Finally we log the results of calling `checkExists` for two different paths. For current working directory it would be relative path "docs/input.txt" and for file and directory in filesystem root it would be absolute path "/docs/input.txt". 

Remember to run this script with NodeJS, as 'fs' is a NodeJS module not available in the browser. You can use `node filename.js` command on your terminal or cmd to run your JavaScript files. Make sure you have installed NodeJS properly and replace "filename" with whatever you name your file.

