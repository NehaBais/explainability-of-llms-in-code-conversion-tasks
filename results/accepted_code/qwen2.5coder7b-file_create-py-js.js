const fs = require("fs");
const path = require("path");

function create(directory) {
  // Create an empty file 'output.txt'
  const filePath = path.join(directory, "output.txt");
  fs.open(filePath, "w", (err, fd) => {
    if (err) throw err;
    fs.close(fd, (err) => {
      if (err) throw err;
      console.log("Output file created.");

      // Create an empty directory 'docs'
      const dirPath = path.join(directory, "docs");
      fs.mkdir(dirPath, { recursive: true }, (err) => {
        if (err) throw err;
        console.log("Docs directory created.");
      });
    });
  });
}

create(__dirname); // current directory
// Note: You might need elevated permissions to create a file or folder in the root directory.
