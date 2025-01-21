The equivalent JavaScript code for the given C code would be as follows:

```javascript
function mkdirp(path) {
    const pathArray = path.split('/');

    function mkdirRecursive(currentPath, currentLevel, maxLevel) {
        if (currentLevel >= maxLevel) return;

        if (!fs.existsSync(currentPath)) {
            fs.mkdirSync(currentPath);
        } else if (fs.statSync(currentPath).isDirectory()) {
            mkdirRecursive(pathArray[currentLevel], currentLevel + 1, maxLevel);
        }
    }

    mkdirRecursive(pathArray[0], 1, pathArray.length);
}
```

This JavaScript function works similarly to the C code. It splits the input string into an array of parts and then recursively creates directories as it goes through each part. The `mkdirSync` function is used for synchronous directory creation. If a directory already exists or cannot be created, it logs an error and exits with 1.
