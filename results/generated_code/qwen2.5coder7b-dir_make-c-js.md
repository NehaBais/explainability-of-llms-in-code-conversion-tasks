Sure! Here is the equivalent JavaScript code that achieves the same functionality as your C code. This function will create directories and any missing parents in a given path string.

```javascript
function mkdirp(path) {
    const fs = require('fs');
    const pathParts = path.split('/');

    for (let i = 1; i <= pathParts.length; i++) {
        const partPath = pathParts.slice(0, i).join('/');
        
        try {
            if (!fs.existsSync(partPath)) {
                fs.mkdirSync(partPath);
            }
        } catch (err) {
            if (err.code !== 'EEXIST') throw err;
        }
    }

    return true;
}

// Example usage
mkdirp('./path/to/dir');
```

### Explanation:
1. **Import `fs` module**: This is necessary to interact with the file system in Node.js.
2. **Split the path into parts**: Using `split('/')`, we break down the path into an array of directory names.
3. **Iterate over each part**: We loop through each part and construct a partial path (`partPath`) by joining the parts up to the current index.
4. **Check if the directory exists**: Use `fs.existsSync` to check if the directory already exists.
5. **Create the directory if it doesn't exist**: If the directory does not exist, use `fs.mkdirSync` to create it.
6. **Handle errors**: Catch any errors that occur during the creation of directories and rethrow them unless the error code is `EEXIST`, which means the directory already exists.

This function will work cross-platform as long as Node.js is available.
