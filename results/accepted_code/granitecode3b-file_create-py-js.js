const fs = require("fs");
function create(directory) {
  fs.writeFileSync(directory + "/output.txt", "");
  fs.mkdirSync(directory + "/docs");
}
create("."); // current directory
create("/"); // root directory
