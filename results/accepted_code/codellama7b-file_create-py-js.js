const fs = require("fs");

function create(directory) {
  const outputFile = path.join(directory, "output.txt");
  const docsDir = path.join(directory, "docs");

  // Create a new empty file called "output.txt"
  fs.openSync(outputFile, "w");

  // Create an empty directory called "docs"
  fs.mkdirSync(docsDir);
}

create("."); // current directory
create("/"); // root directory
