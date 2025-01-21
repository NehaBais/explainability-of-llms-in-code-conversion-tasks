In JavaScript, the `mkdir` function is part of the `fs.promises` API. This API provides methods for creating directories and dealing with files in a promise-based manner.

Here's how you can rewrite your C++ code to JavaScript:

```javascript
const { mkdir } = require('node:fs/promises');
const path = require('path');

async function createDirectory(pathToCreate) {
    try {
        await mkdir(pathToCreate, { recursive: true });
        console.log(`Successfully created directory at ${pathToCreate}`);
    } catch (error) {
        console.error(`Error creating directory: ${error.message}`);
    }
}

const pathToCreate = process.argv[2];
createDirectory(pathToCreate);
```

In this JavaScript code:
- We use the `require('fs/promises')` to import the `mkdir` function from Node.js's built-in file system module.
- We also require the `path` module which provides utilities for manipulating paths.
- The `createDirectory` function uses async/await syntax to wait for the directory creation operation to complete. If the directory is successfully created, a success message is printed. If an error occurs during directory creation, an error message is logged.
- We pass the path to create as an argument to the `createDirectory` function.
