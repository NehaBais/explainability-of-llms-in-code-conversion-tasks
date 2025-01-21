To convert the given C code to JavaScript, you can use the `fs` module provided by Node.js. The `fs` module offers methods for interacting with the file system, including checking if a file or directory exists.

Here's how you can achieve the same functionality in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function checkFile(file) {
  return new Promise((resolve, reject) => {
    fs.stat(file, (err, stats) => {
      if (err) {
        resolve(false);
      } else {
        resolve(stats.isFile());
      }
    });
  });
}

function checkDirectory(dir) {
  return new Promise((resolve, reject) => {
    fs.stat(dir, (err, stats) => {
      if (err) {
        resolve(false);
      } else {
        resolve(stats.isDirectory());
      }
    });
  });
}

async function runChecks() {
  const cwd = process.cwd();

  console.log(`input.txt is a regular file in ${cwd}? ${await checkFile(path.join(cwd, 'input.txt')) ? 'yes' : 'no'}`);
  console.log(`docs is a directory in ${cwd}? ${await checkDirectory(path.join(cwd, 'docs')) ? 'yes' : 'no'}`);
  console.log(`/input.txt is a regular file? ${await checkFile('/input.txt') ? 'yes' : 'no'}`);
  console.log(`/docs is a directory? ${await checkDirectory('/docs') ? 'yes' : 'no'}`);
}

runChecks().catch(console.error);
```

### Explanation:
1. **Import Required Modules**: We import the `fs` and `path` modules.
2. **Helper Functions**:
   - `checkFile`: This function checks if a given file exists and is a regular file.
   - `checkDirectory`: This function checks if a given directory exists and is indeed a directory.
3. **Async Function**: `runChecks`: This function runs the checks for both the current working directory (`cwd`) and absolute paths.
4. **Output**: The results are printed to the console.

### Running the Script:
To run this script, save it to a file (e.g., `check.js`) and execute it using Node.js:

node check.js

This will output whether each file or directory exists in the specified locations.
