const fs = require("fs");

// Create an empty file in current working directory
fs.openSync("./output.txt", "w");
console.log("File created in current directory.");

// Create an empty directory in filesystem root (This will raise an error if not run with appropriate permissions)
try {
  fs.mkdirSync("/", "0750");
} catch (error) {
  console.error(`Error creating directory in the root: ${error}`);
}

console.log("Directory created in root.");
