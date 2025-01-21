Sure, here is the equivalent JavaScript code:

```javascript
const fs = require('fs');
const path = require('path');

function create(root) {
  return fs.promises.writeFile(path.join(root, 'output.txt'), '').then(() => {
    return fs.mkdir(path.join(root, 'docs')).catch((error) => {
      if (error.code === 'EEXIST') {
        return fs.rmdir(path.join(root, 'docs'));
      } else {
        throw error;
      }
    });
  }).catch((error) => {
    throw error;
  });
}

function main() {
  create('.').then(() => {
    return create('/');
  }).catch((error) => {
    console.error(`Error: ${error.message}`);
    process.exit(1);
  });
}
```
In this code, we are using the `fs` module to write a file and create a directory. We use the `.promises` API to make asynchronous operations promise-based.
The function `create(root)` takes a `root` parameter which is of type `string`. It creates an output.txt file in the specified `root` directory, and then attempts to create a docs directory if it does not exist, or remove it if it already exists. If any error occurs, it logs the error message and exits the program with a non-zero exit code.
The function `main()` calls the `create(root)` function twice in sequence to create both output.txt and docs directories at the current working directory and the filesystem root. If an error occurs during this process, it logs the error message and exits the program with a non-zero exit code.
