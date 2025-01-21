const fs = require("fs");
const path = "./path/to/dir";

try {
  fs.mkdirSync(path, { recursive: true });
} catch (err) {
  console.error("An Error Occured!", err);
}
