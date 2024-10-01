 In JavaScript, you can use the `fs` module in Node.js to create directories. The `mkdir` function has an optional parameter which specifies whether the created directory should be created with parents if they do not exist. Here's how you could convert your Rust code:

```javascript
const fs = require('fs');

function createDirectory(path) {
    try {
        fs.mkdirSync(path, { recursive: true });
        console.log(`Created directory ${path}`);
    } catch (err) {
        if (err.code === 'EEXIST') {
            console.error('Directory already exists');
        } else {
            throw err;
        }
    }
}

// Use the function to create a directory
createDirectory("./path/to/dir");
```

The `fs.mkdirSync` function is used in this script with an additional parameter `{ recursive: true }` which means it creates any necessary parent directories. If there's an error, and if that error's code is `'EEXIST'`, which stands for "File Exists", the message 'Directory already exists' will be printed. Otherwise, the error will be thrown again to stop the script.
