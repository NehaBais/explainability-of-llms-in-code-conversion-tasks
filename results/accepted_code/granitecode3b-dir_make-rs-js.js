const fs = require("fs");
try {
  fs.mkdirSync("./path/to/dir", { recursive: true });
  console.log("Directory created successfully!");
} catch (error) {
  console.error(error);
}
