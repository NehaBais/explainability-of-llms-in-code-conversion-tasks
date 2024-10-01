
Here's a possible implementation of the function in JavaScript:
```javascript
function mkdirp(path) {
    // Create directory and any missing parents
    const dir = path.split('/').slice(-1)[0];
    const parent = path.substring(0, path.length - 1 - dir.length);
    if (!fs.existsSync(parent)) {
        mkdirp(parent);
    }
    fs.mkdirSync(path, { recursive: true });
}

const path = './path/to/dir';
mkdirp(path);
```
This function takes a single `path` string as input and creates the directory and any missing parents using the `fs.mkdirSync()` method from the Node.js built-in `fs` module. The `recursive` option is set to `true` to create nested directories if necessary.

This code will create the directory and any missing parents at the specified `path`, using the same permissions as the `os.MkdirAll()` command in Go.
