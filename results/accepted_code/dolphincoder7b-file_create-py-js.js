import fs from "fs";
export function create(directory) {
  let path = require("path");
  fs.openSync(path.join(directory, "output.txt"), "w", 0o666);
  fs.mkdirSync(path.join(directory, "docs"));
}
create("."); // current directory
create("/"); // root directory
