const fs = require("fs");
const path = require("path");

// here
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// root
fs.renameSync(path.resolve("/input.txt"), path.resolve("/output.txt"));
fs.renameSync(path.resolve("/docs"), path.resolve("/mydocs"));
