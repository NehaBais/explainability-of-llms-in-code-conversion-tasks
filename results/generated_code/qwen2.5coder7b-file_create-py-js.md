In JavaScript, you can use the `fs` module to achieve similar file and directory operations. However, note that Node.js does not provide a built-in way to directly create an empty file of 0 bytes like Python's `open()` function with the "w" mode. Instead, it creates a new file with zero length when opened in write mode.

Here is how you can rewrite your code in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
    // Create an empty file 'output.txt'
    const filePath = path.join(directory, "output.txt");
    fs.open(filePath, 'w', (err, fd) => {
        if (err) throw err;
        fs.close(fd, (err) => {
            if (err) throw err;
            console.log('Output file created.');

            // Create an empty directory 'docs'
            const dirPath = path.join(directory, "docs");
            fs.mkdir(dirPath, { recursive: true }, (err) => {
                if (err) throw err;
                console.log('Docs directory created.');
            });
        });
    });
}

create(__dirname); // current directory
// Note: You might need elevated permissions to create a file or folder in the root directory.
```

In this JavaScript code:
- `fs.open()` is used to open a file for writing. The 'w' flag tells Node.js to open the file for write-only access, creating it if it doesn't exist. If the file already exists, it will be truncated (i.e., its contents will be deleted).
- `fs.mkdir()` is used to create a directory. The `{ recursive: true }` option allows you to create nested directories automatically.

Remember that in Node.js, running scripts that create files or directories in the root directory (`/`) might require elevated permissions. Ensure your script has the necessary permissions or run it with appropriate privileges.
