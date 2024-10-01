 The JavaScript equivalent of the C++ code would be:

```JavaScript
const fs = require('fs');
const path = require('path');

fs.writeFileSync(path.resolve(__dirname, "output.txt"), "", 'utf-8');
fs.writeFileSync("/output.txt", "", 'utf-8');

fs.mkdirSync("docs");
fs.mkdirSync("/docs");
```

Here's what this JavaScript code does:
1. First, it imports the `fs` and `path` modules from Node.js. The `fs` module provides methods for interacting with the file system, while the `path` module helps to resolve relative paths.
2. It then uses `writeFileSync` function of `fs` module to create a new empty "output.txt" in the current directory and root (/).
3. The same is done for the "docs" directory in both places.

It's important to mention that Node.js does not support creating directories at root level (`/` on Unix-like systems or `C:\` on Windows), as it's restricted due to security considerations. However, you can create files directly in the root using absolute paths. 

Also, remember that Node.js scripts usually run with elevated permissions (root), so creating/removing directories at root level might not be successful depending on your system setup and how exactly you're running the script.
