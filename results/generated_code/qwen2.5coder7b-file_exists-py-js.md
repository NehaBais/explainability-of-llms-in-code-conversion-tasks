You can achieve this by using Node.js's `fs` and `path` modules. Here is how you would convert the Python code:

```javascript
const fs = require('fs');
const path = require('path');

function checkFileAndDirectoryExists(filePath, directoryPath) {
    if (fs.existsSync(path.join(__dirname, filePath))) {
        console.log(`${filePath} exists.`);
    } else {
        console.log(`${filePath} does not exist.`);
    }

    if (fs.existsSync(path.join('/', directoryPath))) {
        console.log(`${directoryPath} exists.`);
    } else {
        console.log(`${directoryPath} does not exist.`);
    }
}

checkFileAndDirectoryExists('input.txt', 'docs');
```
This JavaScript code checks whether the file `input.txt` and directory `docs` are present in both the current working directory (`__dirname`) as well as at the root of the filesystem (`/`). The `existsSync()` function is used to check for the existence of files or directories synchronously.

**Note:** You should replace `'input.txt'` and `'docs'` with your actual file and directory names.
