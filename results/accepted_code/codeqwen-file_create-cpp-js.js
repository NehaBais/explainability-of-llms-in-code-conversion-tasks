const fs = require("fs");
const path = require("path");

// Create output.txt file in current working directory and root directory
[process.cwd(), "/"].forEach((dir) => {
  let filePath = path.join(dir, "output.txt");
  fs.writeFileSync(filePath, "", (err) => {
    if (err) throw err;
  });

  let dirPath = path.join(dir, "docs");
  fs.mkdirSync(dirPath, (err) => {
    if (err) throw err;
  });
});
