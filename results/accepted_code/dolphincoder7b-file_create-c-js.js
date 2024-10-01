const fs = require("fs");

// Create "output.txt" file and set its size to 0 bytes
fs.openSync("./output.txt", "w");
fs.truncateSync("./output.txt", 0);

// Create directory "docs" with appropriate rights
if (!fs.existsSync("./docs")) {
  fs.mkdirSync("./docs", { mode: 511 }); // 511 is rwxr-x--- in decimal representation
}
