function STREQ(a, b) {
  return a === b;
}

function STRNE(a, b) {
  return !STREQ(a, b);
}

function STRLT(a, b) {
  return a < b;
}

function STRGT(a, b) {
  return a > b;
}

function STREQCaseSensitive(a, b) {
  return a === b;
}

function STREQCaseInsensitive(a, b) {
  return a.toLowerCase() === b.toLowerCase();
}
