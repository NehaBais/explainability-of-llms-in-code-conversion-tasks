const fs = require("fs");
const path = require("path");

function create(directory) {
  const outputPath = path.join(directory, "output.txt");
  fs.writeFileSync(outputPath, ""); // Create an empty file
  fs.mkdirSync(path.join(directory, "docs")); // Create an empty directory
}

create("."); // Current directory
create("/"); // Root directory
