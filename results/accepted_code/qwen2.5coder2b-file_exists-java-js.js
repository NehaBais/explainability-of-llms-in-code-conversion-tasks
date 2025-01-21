const fs = require("fs");

// Check for input.txt in current working directory
fs.accessSync("./docs/input.txt", fs.constants.F_OK);
console.log("input.txt exists in current working directory");

// Check for /docs/input.txt in filesystem root
fs.accessSync("/docs/input.txt", fs.constants.F_OK);
console.log("input.txt exists in filesystem root");

// Check for another directory in current working directory
fs.accessSync("./anotherDirectory", fs.constants.F_OK);
console.log("anotherDirectory exists in current working directory");

// Check for another directory in filesystem root
fs.accessSync("/anotherDirectory", fs.constants.F_OK);
console.log("anotherDirectory exists in filesystem root");
