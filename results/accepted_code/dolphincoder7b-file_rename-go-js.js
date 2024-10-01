const fs = require("fs-extra");
// Rename "input.txt" into "output.txt" in CWD
fs.renameSync("./input.txt", "./output.txt");
// Rename "docs" into "mydocs" in CWD
fs.renameSync("./docs", "./mydocs");
// Same as above, but with filesystem root
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
