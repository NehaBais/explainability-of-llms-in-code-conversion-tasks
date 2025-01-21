const fs = require("fs");
const path = require("path");

function create(directory) {
  const filePath = path.join(directory, "output.txt");
  fs.writeFileSync(filePath, "", "utf8"); // Create an empty file
  fs.mkdirSync(path.join(directory, "docs")); // Create an empty directory
}

create("."); // current directory
create("/"); // root directory
