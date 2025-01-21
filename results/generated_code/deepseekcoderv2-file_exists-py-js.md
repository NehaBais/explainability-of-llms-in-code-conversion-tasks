 Here's how you can convert the given Python code to JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

// Check for file and directory in the current working directory
console.log(fs.existsSync('input.txt'));
console.log(fs.existsSync('/input.txt'));
console.log(fs.existsSync('docs'));
console.log(fs.existsSync('/docs'));
```

This JavaScript code uses Node.js's `fs` module to check for the existence of files and directories, similar to how Python's `os` module is used in the original code. The `fs.existsSync()` method is synchronous and returns a boolean indicating whether the file or directory exists.
