const fs = require("fs");
console.log(fs.statSync(__filename).size); // Output size of current working directory file
console.log(fs.statSync("/file.txt").size); // Output size of file in file system root
