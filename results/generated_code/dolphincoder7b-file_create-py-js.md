The JavaScript equivalent of the Python code provided is as follows:
```
import fs from 'fs';
export function create(directory){
    let path = require('path');
    fs.openSync(path.join(directory, "output.txt"),  'w', 0o666);
    fs.mkdirSync(path.join(directory, "docs"));
}
create("."); // current directory
create("/"); // root directory
```
In JavaScript, `fs` is the file system module from Node.js, and `require('path')` is used to obtain the path module. The `openSync` method creates a new empty file with write permissions. The `mkdirSync` method creates an empty directory. 

Please note that this JavaScript code cannot be executed in a browser because it requires Node.js. However, you can copy and paste the code into your local project to use in any environment that supports Node.js or similar server-side programming environments.
