const fs = require("fs");
const path = require("path");

fs.writeFileSync(path.resolve(__dirname, "output.txt"), "", "utf-8");
fs.writeFileSync("/output.txt", "", "utf-8");

fs.mkdirSync("docs");
fs.mkdirSync("/docs");
