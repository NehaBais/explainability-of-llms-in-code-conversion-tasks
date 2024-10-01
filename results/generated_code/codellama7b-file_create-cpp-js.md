Sure! Here's the converted code in JavaScript:
```javascript
const fs = require('fs');

// Create an empty file called "output.txt" of size 0 bytes in the current working directory
fs.writeFileSync('output.txt', '');

// Create a new empty directory called "docs" in the current working directory
fs.mkdirSync('docs');

// Create an empty file called "output.txt" of size 0 bytes in the filesystem root
fs.writeFileSync('/output.txt', '');

// Create a new empty directory called "docs" in the filesystem root
fs.mkdirSync('/docs');
```
Note that this code uses the `fs` module to interact with the file system, and it also uses the `sync` method to create the files and directories synchronously. This means that the code will not proceed until the file or directory has been created successfully. If you want to create these objects asynchronously, you can use the `async` method instead of `sync`.
