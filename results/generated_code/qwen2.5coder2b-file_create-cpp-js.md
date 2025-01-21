In JavaScript, the file system operations are handled using Node.js which is installed with Node.js. The following code would create a new empty file called "output.txt" in the current working directory and an empty directory called "docs".

```javascript
const fs = require('fs');
const path = require('path');

fs.writeFile(path.join(__dirname, 'output.txt'), '', function(err) {
  if (err) throw err;
  console.log("The file was saved!");
});

fs.mkdir(path.join(__dirname, 'docs'), { recursive: true }, function(err) {
  if (err) throw err;
  console.log("Directory created!");
});
```

In the above code:
- `__dirname` variable gives us the directory of the JavaScript file.
- `path.join(__dirname, 'output.txt')` joins the directory path with "output.txt".
- `fs.writeFile(path.join(__dirname, 'output.txt'), '', function(err) { ... })` writes an empty string to a file named "output.txt". If there is no error, it logs "The file was saved!".
- `path.mkdir(path.join(__dirname, 'docs'), { recursive: true }, function(err) { ... })` creates the directory "docs" in the current directory and recursively creates all parent directories if they don't exist. If there is no error, it logs "Directory created!".
