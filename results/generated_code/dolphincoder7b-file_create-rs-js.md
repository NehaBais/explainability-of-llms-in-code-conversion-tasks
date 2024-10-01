```javascript
const { writeFileSync, mkdirSync } = require('fs');
const path = require('path');

const file_name = 'output.txt';
const dir_name  = 'docs';

function main() {
    create('.').and(create('/')).unwrap_or_else((e) => error_handler(e,1));
}

function create(root) {
    const f_path = path.join(root, file_name);
    const d_path = path.join(root, dir_name);
    mkdirSync(d_path, { recursive: true });
    writeFileSync(f_path, ''); // Create the empty output.txt file
}

function error_handler(error, code) {
    console.error('Error:', error);
    process.exit(code);
}
```

Explanation: The `main` function is a simple function that calls the `create` function twice to create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This should be done twice: once in the current working directory and once at the filesystem root, using the `writeFileSync` method from Node.js's File System module (`fs`) to create the files. The `error_handler` function is a similar function that handles any errors that might occur during the process.
