Sure! Here's the converted JavaScript code:
```javascript
const fs = require('fs');
const path = require('path');

const FILE_NAME = 'output.txt';
const DIR_NAME = 'docs';

function main() {
    create('.').then(() => create('/')).catch(errorHandler);
}

async function create(root) {
    const f_path = path.join(root, FILE_NAME);
    const d_path = path.join(root, DIR_NAME);
    try {
        await fs.promises.mkdir(d_path);
        return await fs.promises.writeFile(f_path, '');
    } catch (error) {
        errorHandler(error);
    }
}

function errorHandler(error) {
    console.error('Error:', error);
    process.exit(1);
}
```
Note that this code uses the `fs` module to interact with the file system, and the `path` module to manipulate paths. The `main` function calls the `create` function twice, once with the current working directory (`.`) and once with the root directory (`/`). The `create` function creates a new empty file called `output.txt` in the given directory and an empty directory called `docs`. If there is an error, it calls the `errorHandler` function to handle the error.
