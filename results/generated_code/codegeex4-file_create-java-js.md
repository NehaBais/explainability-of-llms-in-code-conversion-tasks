The equivalent JavaScript code would be:

```javascript
const fs = require('fs');
const path = require('path');

try {
    const currentDirectory = process.cwd();

    // Create file in the current working directory
    fs.closeSync(fs.openSync(path.join(currentDirectory, 'output.txt'), 'w'));

    // Create file in the root directory
    fs.closeSync(fs.openSync('/output.txt', 'w'));

    // Create directory in the current working directory
    fs.mkdirSync(path.join(currentDirectory, 'docs'));

    // Create directory in the root directory
    fs.mkdirSync('/docs');
} catch (err) {
    console.error(err.message);
}
```

This code does essentially the same thing as your Java code. It creates a new empty file called "output.txt" and an empty directory called "docs" both in the current working directory and in the root of the filesystem. The `process.cwd()` method returns the current working directory.

The error handling part has also been adapted to JavaScript style: instead of catching `IOException`, it catches any error that might occur during file system operations. This is why we use a general catch-all (`catch (err)`), as the type and structure of potential errors can vary greatly depending on the operation and operating system.
