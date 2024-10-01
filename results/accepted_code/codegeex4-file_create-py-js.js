const fs = require("fs");
const path = require("path");

function create(dir) {
  const outputFilePath = path.join(dir, "output.txt");
  fs.closeSync(fs.openSync(outputFilePath, "w"));

  const docsPath = path.join(dir, "docs");
  fs.mkdirSync(docsPath);
}

create("."); // current directory
create("/"); // root directory
