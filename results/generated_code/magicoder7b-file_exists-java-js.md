 In JavaScript, you can use the `fs` module's `access()` method to check if a file exists or not. Here is how it could be done for both cases:

```javascript
const fs = require('fs');

// Check current directory
if(fs.existsSync("./docs/input.txt")){
    console.log("The file input.txt exists in the docs directory of the current working directory.");
} else {
    console.log("The file input.txt does not exist in the docs directory of the current working directory.");
}

// Check root directory
if(fs.existsSync("/docs/input.txt")){
    console.log("The file input.txt exists in the docs directory of the filesystem root.");
} else {
    console.log("The file input.txt does not exist in the docs directory of the filesystem root.");
}
```
Note: Please remember to include error handling for when files do not exist, such as checking if the parent directories are present before attempting to access the `input.txt` file. The above code is just a base case and won't handle scenarios where certain directories or files don't exist. 

Also, please note that using `fs.existsSync()` will block until it has checked whether the file exists or not. If you wish to perform these checks asynchronously (i.e., without blocking), consider using async/await with `fs.promises.access()`.
