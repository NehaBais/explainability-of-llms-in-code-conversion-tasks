 In JavaScript, you can use the `fs` module from Node.js to create a directory and its parents. Here's how your Python code could be translated:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dir) {
    try {
        fs.makedirsSync(dir, {mode: 0o755});
    } catch (err) {
        if (err.code !== 'EEXIST') throw err;
    }
}
```

This code does the same thing as your Python function: it creates a directory and its parents if they do not exist. If any of them already exists, it just ignores that error. Note that there is no direct equivalent to Python's `exist_ok=True` in JavaScript, but this approach ensures that multiple calls to create the same path will not throw errors, unlike creating a new directory and catching errors would do.

Make sure you have Node.js installed on your machine to run this JavaScript code.
