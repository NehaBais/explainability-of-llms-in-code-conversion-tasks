This is how the equivalent JavaScript code would look like:
```javascript
const fs = require('fs'); 

function mkdir(path) {
  try {
    if (!fs.existsSync(path)){
      fs.mkdirSync(path);
    }
    console.log(`Directory ${path} created successfully`);
  } catch (error) {
    console.error(`An error occurred while creating the directory: ${error}`);
  }
}
```
Please note that this code assumes that you're running it with Node.js environment, as there is no equivalent in JavaScript for C++ filesystem library. Also, the file system methods are synchronous. If you need to handle asynchronous operations (like handling errors), you should replace these calls with `fs.promises.<method>` and use callback functions or async/await syntax where needed.
