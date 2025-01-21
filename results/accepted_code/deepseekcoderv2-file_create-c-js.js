const fs = require("fs");
const path = require("path");

function createFileAndDirectory(filePath) {
  // Create an empty file at the specified path
  fs.openSync(filePath, "w", (err, fd) => {
    if (err) throw err;
    console.log(`File ${filePath} created successfully.`);
  });

  // Set permissions for the file
  fs.chmodSync(filePath, parseInt("0640", 8));

  // Create an empty directory at the specified path
  fs.mkdirSync(path.dirname(filePath), { mode: parseInt("0750", 8) });
}

// Perform the operation in the current working directory
const cwdFilePath = path.join(__dirname, "output.txt");
createFileAndDirectory(cwdFilePath);

// Perform the operation at the filesystem root (use absolute paths)
const rootFilePath = path.join("/", "output.txt");
createFileAndDirectory(rootFilePath);
