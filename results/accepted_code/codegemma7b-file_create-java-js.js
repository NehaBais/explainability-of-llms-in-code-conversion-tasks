const fs = require("fs");

try {
  fs.writeFileSync("output.txt", "");
  fs.writeFileSync("/output.txt", "");
  fs.mkdirSync("docs");
  fs.mkdirSync("/docs");
} catch (err) {
  console.error(err.message);
}
