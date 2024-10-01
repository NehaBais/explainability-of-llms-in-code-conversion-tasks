In JavaScript Node environment, you can use the 'fs' (file system) module which provides a way of performing I/O operations in a way that is similar to how it is done in Go. Here's your converted function:

```javascript
const fs = require('fs');

function createDirectory(path) {
    try {
        if (!fs.existsSync(path))) {
            fs.mkdirSync(path, { recursive: true }));
            console.log(`Directory ${path} was created successfully`);
        } else {
            console.log(`Directory ${path} already exists`);
        }
    } catch (err) {
        if (err.code === 'ENOENT') {
            fs.mkdirSync(path, { recursive: true }));
            console.log(`Directory ${path} was created successfully`);
        } else throw err;
    }
}
```

This function uses Node.js's built-in `fs` module to perform the required directory creation operation. It includes error handling for cases where the target directory already exists or an encountered I/O error prevents the directory from being created.
