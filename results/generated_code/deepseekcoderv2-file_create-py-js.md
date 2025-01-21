 Here's the equivalent JavaScript code to create a new empty file called `output.txt` and an empty directory called `docs` in both the current working directory and the filesystem root:

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
    const filePath = path.join(directory, "output.txt");
    fs.writeFileSync(filePath, '', 'utf8'); // Create an empty file
    fs.mkdirSync(path.join(directory, "docs")); // Create an empty directory
}

create("."); // current directory
create("/"); // root directory
```

This code uses Node.js's `fs` module to create files and directories. The `fs.writeFileSync` function is used to create an empty file, and `fs.mkdirSync` is used to create a directory. Both functions are synchronous in this example for simplicity, but you can make them asynchronous if needed.
