In JavaScript, the `fs` module does not have direct functionality to list files and directories in the filesystem root, unlike Rust. However, you can use Node.js' built-in `path` module to help with this.

Here is how you could achieve the same function in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function checkFilesInDirectory(dir) {
    const files = fs.readdirSync(dir).map(file => path.join(dir, file));
    
    files.forEach(file => {
        try {
            if (fs.statSync(file).isDirectory()) {
                console.log(`${file} is a directory`);
            } else {
                console.log(`${file} is a file`);
            }
        } catch (err) {
            console.error(`Error checking ${file}:`, err);
        }
    });
}

checkFilesInDirectory('.');
checkFilesInDirectory('/input.txt');
checkFilesInDirectory('/docs');
```

This JavaScript script checks each file in the current directory, as well as `/input.txt` and `/docs`. It uses Node.js' `fs.readdirSync()` function to list all files in the directory, then iterates over this list. For each entry, it checks whether it is a directory using `fs.statSync().isDirectory()`, and prints the result.

Note that this script assumes that you are running this code from a Node.js environment with the necessary modules installed (you can install them using `npm install fs path`).
