const fs = require("fs");
const path = require("path");
// Create output.txt in the current working directory
fs.openSync(path.join(__dirname, "output.txt"), "w");
// Create docs directory in the filesystem root
fs.mkdirSync("/docs", { mode: 0o750 });
