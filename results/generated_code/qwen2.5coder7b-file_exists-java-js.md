To convert the given Java code to JavaScript, you can use the `fs` module from Node.js. Here is how you can achieve this:

```javascript
const fs = require('fs');
const path = require('path');

// Function to check if a file or directory exists
function exists(path) {
  return fs.existsSync(path);
}

// Check for current working directory
const currentDir = path.join(__dirname, 'docs', 'input.txt');
console.log(`Current Directory: ${exists(currentDir)}`);

// Check for filesystem root
const rootDir = path.join('/', 'docs', 'input.txt');
console.log(`Root Directory: ${exists(rootDir)}`);
```

### Explanation:
1. **Require Modules**:
   - `fs` module is used to interact with the file system.
   - `path` module is used for manipulating and transforming file paths.

2. **Function Definition**:
   - The `exists` function takes a path as an argument and uses `fs.existsSync` to check if it exists synchronously.

3. **Check Current Working Directory**:
   - `__dirname` gives the current directory of the script.
   - `path.join(__dirname, 'docs', 'input.txt')` constructs the full path to `input.txt` in the `docs` directory within the current working directory.

4. **Check Filesystem Root**:
   - `path.join('/', 'docs', 'input.txt')` constructs the full path to `input.txt` in the `docs` directory at the filesystem root (`/`).

5. **Output Results**:
   - The results are logged to the console indicating whether the file or directory exists.

### Note:
- Running this script directly from a browser environment (e.g., through HTML `<script>` tag) will not work because Node.js modules are not available in that context.
- You need to run this JavaScript code in a Node.js environment.
