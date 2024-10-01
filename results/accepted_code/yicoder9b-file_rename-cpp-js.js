const fs = require("fs");

// Renaming in current working directory
try {
  fs.renameSync("input.txt", "output.txt");
  console.log(
    "Successfully renamed input.txt to output.txt in the current directory!",
  );
} catch (error) {
  console.error(`Got an error: ${error.message}`);
}

try {
  fs.renameSync("docs", "mydocs");
  console.log("Successfully renamed docs to mydocs in the current directory!");
} catch (error) {
  console.error(`Got an error: ${error.message}`);
}

// Renaming at filesystem root
try {
  fs.renameSync("/input.txt", "/output.txt");
  console.log("Successfully renamed /input.txt to /output.txt!");
} catch (error) {
  console.error(`Got an error: ${error.message}`);
}

try {
  fs.renameSync("/docs", "/mydocs");
  console.log("Successfully renamed /docs to /mydocs!");
} catch (error) {
  console.error(`Got an error: ${error.message}`);
}
