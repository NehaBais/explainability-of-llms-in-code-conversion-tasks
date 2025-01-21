 Certainly! Below is the JavaScript code that performs the same checks as your Java code:

```javascript
const fs = require('fs');
const path = require('path');

// Check for current working directory
const filePath1 = path.join(__dirname, 'docs', 'input.txt');
console.log(fs.existsSync(filePath1));

// Check for filesystem root
const filePath2 = path.join('/', 'docs', 'input.txt');
console.log(fs.existsSync(filePath2));
```

This code uses Node.js's `fs` module to check if the files or directories exist. The `path.join` function is used to construct file paths relative to the current working directory and the root of the filesystem, respectively.
