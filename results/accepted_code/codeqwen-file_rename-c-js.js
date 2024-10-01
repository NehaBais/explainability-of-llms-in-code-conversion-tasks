const fs = require("fs");

// Rename file in current working directory
try {
  fs.renameSync("./input.txt", "./output.txt");
  console.log(`File renamed successfully to output.txt`);
} catch (err) {
  console.error(`Error occurred while renaming the file: ${err}`);
}

// Rename directory in current working directory
try {
  fs.renameSync("./docs", "./mydocs");
  console.log(`Directory renamed successfully to mydocs`);
} catch (err) {
  console.error(`Error occurred while renaming the directory: ${err}`);
}

// Rename file in root of filesystem
try {
  fs.renameSync("/input.txt", "/output.txt");
  console.log(`File renamed successfully to /output.txt`);
} catch (err) {
  console.error(`Error occurred while renaming the file: ${err}`);
}

// Rename directory in root of filesystem
try {
  fs.renameSync("/docs", "/mydocs");
  console.log(`Directory renamed successfully to /mydocs`);
} catch (err) {
  console.error(`Error occurred while renaming the directory: ${err}`);
}
