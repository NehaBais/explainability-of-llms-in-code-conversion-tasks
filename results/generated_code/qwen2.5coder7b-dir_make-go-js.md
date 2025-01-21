In JavaScript, you can use the `fs` module's `mkdir` method in combination with a recursive function to create directories and their missing parents. Here is how you can implement this:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
    return new Promise((resolve, reject) => {
        if (fs.existsSync(dirPath)) {
            resolve();
        } else {
            fs.mkdir(dirPath, { recursive: true }, (err) => {
                if (err) {
                    reject(err);
                } else {
                    resolve();
                }
            });
        }
    });
}

// Usage
mkdirp('/tmp/some/path/to/dir')
    .then(() => console.log('Directory created successfully'))
    .catch((err) => console.error('Error creating directory:', err));
```

### Explanation:
1. **Importing Modules**: We import the `fs` (file system) and `path` modules.
2. **mkdirp Function**: 
   - This function checks if the directory already exists using `fs.existsSync`.
   - If the directory exists, it resolves the promise immediately.
   - If not, it uses `fs.mkdir` with `{ recursive: true }` to create the directory and its parents.
3. **Error Handling**: The `mkdir` method is called with a callback function that handles errors and resolves or rejects the promise accordingly.
4. **Usage**: The `mkdirp` function is called with the path you want to create, and it logs success or error messages.

This implementation ensures that the directory and its missing parents are created, similar to the `os.MkdirAll` function in Golang.
