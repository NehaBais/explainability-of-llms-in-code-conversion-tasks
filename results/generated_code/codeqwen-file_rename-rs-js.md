In JavaScript, the `fs` module provides methods for interacting with the file system. Here's how you would convert your Rust code to JavaScript:

```javascript
const fs = require('fs');

try {
    fs.renameSync('input.txt', 'output.txt');
    fs.renameSync('docs', 'mydocs');
    fs.renameSync('/input.txt', '/output.txt');
    fs.renameSync('/docs', '/mydocs');
} catch (err) {
    console.error(err);
}
```

This code uses the `fs.renameSync()` method, which renames or moves a file synchronously. If an error occurs during the renaming process, it will be caught and logged to the console using the `try/catch` statement. Note that in Node.js (JavaScript's runtime built on Chrome's V8 engine), unlike Rust, you do not need to explicitly import 'fs' module as it is a core module available by default. The 'require()' function is used for importing external modules into your code.
