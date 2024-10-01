Sure! Here's the equivalent JavaScript code:
```
const fs = require('fs');
console.log(fs.statSync(__filename).size); // Output size of current working directory file
console.log(fs.statSync('/file.txt').size); // Output size of file in file system root
```
Note that the `require` function is used to import the `fs` module, and the `statSync` method is used to get information about a file's size. The `__filename` variable refers to the current JavaScript file being executed, and the `/file.txt` path is relative to the root directory of the file system.

