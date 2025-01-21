const fs = require("fs");
const process = require("process");

// Get the file name from command line arguments
const fileName = process.argv[2];
if (!fileName) {
  console.error("No file name supplied");
  process.exit(1);
}

// Read metadata of the file
fs.stat(fileName, (err, stats) => {
  if (err) {
    console.error(`Error: ${err.message}`);
    process.exit(2);
  }
  if (!stats.isFile()) {
    console.error("The specified path is not a file.");
    process.exit(3);
  }
  console.log(`Size of ${fileName} is ${stats.size} bytes`);
});
