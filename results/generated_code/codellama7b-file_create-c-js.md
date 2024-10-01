To convert the given C code to JavaScript, you can use Node.js's built-in `fs` module to perform file and directory operations. Here is one way to do it:
```
const fs = require('fs');

// Create an empty file in the current working directory
fs.writeFileSync('output.txt', '');

// Create a directory called "docs" in the current working directory
fs.mkdirSync('docs');

// Create an empty file in the root filesystem
fs.writeFileSync('/output.txt', '');

// Create a directory called "docs" in the root filesystem
fs.mkdirSync('/docs');
```
Note that the `O_WRONLY|O_CREAT|O_TRUNC` flag is not required in JavaScript since it is automatically set when creating a file using `fs.writeFileSync()`. Additionally, the `creat()` function is not needed in JavaScript since `fs.writeFileSync()` can be used to create a new empty file with the specified permissions.

Also note that the `umask` variable is not available in JavaScript since it is a C construct and does not have an equivalent in JavaScript.
