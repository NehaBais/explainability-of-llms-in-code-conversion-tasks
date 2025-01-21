 Sure, here is the equivalent JavaScript code using Node.js's `fs` module to verify the size of a file called `input.txt`:

```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(filename) {
    try {
        const filePath = path.resolve(process.cwd(), filename);
        const stats = fs.statSync(filePath);
        console.log(`Size of file ${filename} is ${stats.size} bytes.`);
    } catch (err) {
        console.error(err.message);
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```

### Explanation:
1. **Importing Modules**: We import the `fs` and `path` modules from Node.js to handle file operations and path resolution respectively.
2. **Resolving Paths**: The `process.cwd()` method returns the current working directory, and `path.resolve(process.cwd(), filename)` constructs the absolute path for the given filename.
3. **Reading File Stats**: We use `fs.statSync` to get file statistics (including size) synchronously. If the file does not exist or there is an error, it will throw an exception.
4. **Error Handling**: The `try...catch` block handles any errors that occur during file operations and prints appropriate messages.
