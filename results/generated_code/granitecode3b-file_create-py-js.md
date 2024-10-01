Here's the equivalent JavaScript code:
```javascript
const fs = require('fs');
function create(directory) {
    fs.writeFileSync(directory + '/output.txt', '');
    fs.mkdirSync(directory + '/docs');
}
create('.'); // current directory
create('/'); // root directory
```
Note that the `require()` function is used to import the `fs` module in Node.js, which provides file system operations like creating files and directories. The `writeFileSync()` method creates a new empty file and the `mkdirSync()` method creates a new directory.

