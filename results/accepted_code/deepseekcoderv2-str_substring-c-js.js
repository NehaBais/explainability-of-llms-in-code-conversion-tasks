function substring(s, n, m) {
  // Check for null s
  if (s === null) {
    return null;
  }

  // Negative m to mean 'up to the mth char from right'
  if (m < 0) {
    m = s.length + m - n + 1;
  }

  // n < 0 or m < 0 is invalid
  if (n < 0 || m < 0) {
    return null;
  }

  // Make sure string does not end before n and advance the "s" pointer to beginning of substring
  for (; n > 0; s = s.substring(1), n--) {
    if (s[0] === "\0") {
      // String ends before n: invalid
      return null;
    }
  }

  let result = "";
  while (m-- > 0 && s.length > 0) {
    result += s[0];
    s = s.substring(1);
  }

  return result;
}

function strWholeLessOne(s) {
  return substring(s, 0, s.length - 1);
}

function strFromCh(s, ch, m) {
  const index = s.indexOf(ch);
  if (index === -1) {
    return null;
  }
  return substring(s, index, m);
}

function strFromString(s, inStr, m) {
  const index = s.indexOf(inStr);
  if (index === -1) {
    return null;
  }
  return substring(s, index, m);
}

// Test cases
const s = "hello world shortest program";

function test(fn) {
  const result = fn();
  if (result === null) {
    console.log("--error--");
  } else {
    console.log(result);
  }
}

test(() => substring(s, 12, 5)); // get "short"
test(() => substring(s, 6, -1)); // get "world shortest program"
test(strWholeLessOne); // "... progra"
test(() => strFromCh(s, "w", 5)); // "world"
test(() => strFromString(s, "ro", 3)); // "rog"
