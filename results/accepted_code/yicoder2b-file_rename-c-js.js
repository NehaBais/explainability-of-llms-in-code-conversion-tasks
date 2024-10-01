const fs = require("fs");

// Rename "input.txt" to "output.txt" and "docs" to "mydocs" in current working directory
fs.rename("input.txt", "output.txt", (err) => {
  if (err) {
    throw err;
  }
});
fs.rename("docs", "mydocs", (err) => {
  if (err) {
    throw err;
  }
});

// Rename "/input.txt" to "/output.txt" and "/docs" to "/mydocs" in filesystem root
try {
  fs.rename("/input.txt", "/output.txt");
} catch (e) {
  console.log(e);
}
try {
  fs.rename("/docs", "/mydocs");
} catch (e) {
  console.log(e);
}
