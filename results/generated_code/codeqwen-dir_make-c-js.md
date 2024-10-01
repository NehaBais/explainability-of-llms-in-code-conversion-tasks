The given C code is creating a directory and its parent directories if they do not exist. However, JavaScript has built-in support to create the required directories so we can use that instead of manually writing the logic. Here's how you could implement it using Node.js:

```javascript
const fs = require('fs');
const path = require('path');

async function mkdirp(dirPath) {
    // Ensure directory exists, create if not
    try {
        await fs.promises.mkdir(dirPath, { recursive: true });
    } catch (err) {
        if (err.code !== 'EEXIST') throw err;
    }
}

(async () => {
    await mkdirp('./path/to/dir');
})();
```

In the above JavaScript code, we import the `fs` and `path` modules which provides functions to interact with the file system. 

The `mkdirp` function is an asynchronous function that uses Node.js' built-in `fs.promises.mkdir` method, which creates a directory asynchronously and throws an error if it already exists.

To use this code, you would call the `mkdirp` function with the path of the directory you want to create. In this example, the function is called with './path/to/dir'. The `await` keyword makes sure that the `mkdirp` function finishes before proceeding.
