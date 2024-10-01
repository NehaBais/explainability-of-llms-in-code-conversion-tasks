Here is the equivalent JavaScript code using Node.js built-in modules for file system related operations:

```javascript
const fs = require('fs');
const path = require('path');

// Check if 'input.txt' exists in current directory 
if (fs.existsSync(path.join(__dirname, 'input.txt'))))) {
  console.log("'input.txt' exists in the current directory");
} else {
  console.log("'input.txt' doesn't exist in the current directory");
}

// Check if 'docs' exists as a directory in the filesystem root 
if (fs.existsSync(path.join(__dirname, '/docs'))))) {
  console.log("'docs' exists as a directory in the filesystem root");
} else {
  console.log("'docs' doesn't exist as a directory in the filesystem root");
}
```
In this code, we first require the 'fs' (file system) and 'path' modules to help us with file/directory checking.
Then we perform two checks: 
- The existence of 'input.txt' inside the current working directory.
- The existence of a directory called 'docs' at the root level in the filesystem.
We use `fs.existsSync()` method to check if a particular file or directory exists at the given path. 
Finally, we print out appropriate console logs based on the result of our checks.
