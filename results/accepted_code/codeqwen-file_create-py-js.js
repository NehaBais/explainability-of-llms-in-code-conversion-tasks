const fs = require("fs");
const path = require("path");

function create(directory) {
  fs.openSync(path.join(directory, "output.txt"), "w");
  fs.mkdirSync(path.join(directory, "docs"));
}

create(__dirname); // current directory
create("/"); // root directory
