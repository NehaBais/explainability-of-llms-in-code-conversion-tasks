In JavaScript, the `fs` module does not have direct functions for file renaming like Rust. However, you can use Node.js's API to accomplish this task.

```javascript
const fs = require('fs');
const path = require('path');

function renameFile(dir, oldName, newName) {
    const filePath = path.join(dir, oldName);
    const newPath = path.join(dir, newName);

    fs.rename(filePath, newPath, (err) => {
        if (err) throw err;
        console.log(`Successfully renamed ${oldName} to ${newName}`);
    });
}

// Rename "input.txt" and "docs" in the current working directory
renameFile('.', 'input.txt', 'output.txt');
renameFile('.', 'docs', 'mydocs');

// Rename "input.txt" and "docs" in the root directory
renameFile('/', 'input.txt', 'output.txt');
renameFile('/', 'docs', 'mydocs');
```

Please note that Node.js requires that the file system module to be enabled. This can typically be done by running your Node.js application with the `--experimental-new-features` flag.

For example, you would run your code like this:

node --experimental-new-features your_script.js

