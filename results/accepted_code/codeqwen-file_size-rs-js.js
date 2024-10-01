const fs = require("fs");
const path = require("path");

function exit_err(msg, code) {
  console.error(`Error: ${msg}`);
  process.exit(code);
}

// check file size in current working directory
try {
  let metadata = fs.statSync(path.join(__dirname, "input.txt"));
  console.log(`Size of input.txt is ${metadata.size} bytes`);
} catch (error) {
  exit_err(error.message, 2);
}

// check file size in root directory
try {
  let metadata = fs.statSync("/input.txt"); // please replace with the correct path of the file if needed
  console.log(`Size of /input.txt is ${metadata.size} bytes`);
} catch (error) {
  exit_err(error.message, 2);
}
