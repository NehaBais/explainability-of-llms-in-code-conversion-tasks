const fs = require("fs");
const path = require("path");

// Creating an empty file named "output.txt" in the current working directory and root directory
["", "/"].forEach((dir) => {
  const filePath = path.join(process.cwd(), dir, "output.txt");
  fs.writeFileSync(filePath, ""); // Empty string for no data
});

// Creating an empty directory named "docs" in the current working directory and root directory
["", "/"].forEach((dir) => {
  const dirPath = path.join(process.cwd(), dir, "docs");
  if (!fs.existsSync(dirPath)) {
    fs.mkdirSync(dirPath);
  }
});
