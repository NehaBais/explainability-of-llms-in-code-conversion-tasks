const fs = require("fs");

// Check size of 'input.txt' in current working directory
let size1;
try {
  size1 = fs.statSync(__dirname + "/input.txt").size;
} catch (error) {
  console.log(`Error reading file: ${error}`);
}

// Check size of 'input.txt' in root directory
let size2;
try {
  size2 = fs.statSync("/input.txt").size;
} catch (error) {
  console.log(`Error reading file: ${error}`);
}
