In JavaScript, we can use the `fs` module to perform file system operations like creating directories. Here is an equivalent function in JavaScript for your C++ code:

```javascript
const fs = require('fs');

function mkdir(path) {
  if (fs.existsSync(path)) 
    return;

  try {
    fs.mkdirSync(path, { recursive: true });
  } catch (error) {
    console.log(`Couldn't create directory: ${path}`);
    throw error;
  }
}
```
This function takes a path string as an argument and creates the directory including any necessary parent directories using `fs.mkdirSync()` with the option `recursive` set to true. If the directory already exists or if it is successfully created, this function will not return anything. If creating the directory fails, it logs an error message to console and re-throws the error for further handling.

Please note that unlike C++ version which uses filesystem library of standard template library (std::filesystem), in JavaScript we are using file system operation module (`fs`) directly from NodeJS environment. Also, there is no direct equivalent function in pure Javascript to create a directory with all its parent directories at once like `mkdir -p` command in Unix systems. This is why usage of third-party libraries or the native `fs.existsSync()` method is required in JavaScript.
