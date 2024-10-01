const fs = require("fs");
console.log(
  "input.txt is a regular file? " + fs.statSync("input.txt").isFile(),
);
console.log("docs is a directory? " + fs.statSync("docs").isDirectory());
console.log(
  "/input.txt is a regular file? " + fs.statSync("/input.txt").isFile(),
);
console.log("/docs is a directory? " + fs.statSync("/docs").isDirectory());
