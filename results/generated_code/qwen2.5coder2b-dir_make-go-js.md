The equivalent function in JavaScript is `fs.mkdirSync` and you can set the mode using the third argument. You need to check if directory exists, otherwise create it.
Here's how you can do it:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirSync(dir) {
    const parentDir = path.dirname(dir);
    
    if (!fs.existsSync(parentDir)) {
        mkdirSync(parentDir);
    }

    try {
        fs.mkdirSync(dir, { recursive: true });
    } catch (error) {
        console.error(`Error creating directory ${dir}:`, error);
    }
}

mkdirSync('./path/to/dir');
```

This function will create the directory in the parent directories if they don't exist and then create the specified directory itself. Note that it is important to handle any errors that might occur during the directory creation process.

The `recursive: true` option passed to `fs.mkdirSync` ensures that if a parent directory doesn't already exist, it will also be created.
