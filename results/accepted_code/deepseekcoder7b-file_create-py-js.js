const fs = require("fs");
const path = require("path");

function create(directory) {
  fs.writeFileSync(path.join(directory, "output.txt"), "");
  fs.mkdirSync(path.join(directory, "docs"));
}

create("."); // current directory
create("/"); // root directory (this may not work as expected on all platforms)
