 Sure! Here's the equivalent JavaScript code to achieve the same functionality as your Go program:

```javascript
const fs = require('fs');
const path = require('path');

function createFile(fn) {
    const filePath = path.resolve(__dirname, fn);
    fs.writeFile(filePath, '', (err) => {
        if (err) {
            console.error(err);
            return;
        }
        console.log(`file ${filePath} created!`);
    });
}

function createDir(dn) {
    const dirPath = path.resolve(__dirname, dn);
    fs.mkdir(dirPath, (err) => {
        if (err) {
            console.error(err);
            return;
        }
        console.log(`directory ${dirPath} created!`);
    });
}

// Create file in the current working directory
createFile('input.txt');

// Create file in the filesystem root (assuming __dirname is the root for this example)
createFile('/input.txt');

// Create directory in the current working directory
createDir('docs');

// Create directory in the filesystem root (assuming __dirname is the root for this example)
createDir('/docs');
```

### Explanation:
1. **Importing Modules**: In JavaScript, we use Node.js modules like `fs` and `path` to handle file system operations.
2. **Creating Files**: We use `fs.writeFile` to create a new empty file with the specified path. The `__dirname` variable provides the current directory name in Node.js, which helps resolve relative paths correctly.
3. **Creating Directories**: Similarly, we use `fs.mkdir` to create a new directory with the specified path.
4. **Handling Errors**: We handle errors by checking if they are not null and printing them using `console.error`.

This code will create an empty file named "input.txt" in both the current working directory and the root directory, as well as creating an empty directory named "docs" in both locations.
