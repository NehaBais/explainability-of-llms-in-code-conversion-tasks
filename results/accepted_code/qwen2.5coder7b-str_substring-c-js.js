function substring(s, n, m) {
  if (s === null) return null;

  let len = s.length;
  if (m < 0) {
    m = len + m - n + 1;
  }

  if (n < 0 || m < 0) {
    return null;
  }

  for (; n > 0; s = s.slice(1), n--) {
    if (s === "") {
      return null;
    }
  }

  let result = s.slice(0, m);
  return result;
}

function str_wholeless1(s) {
  return substring(s, 0, s.length - 1);
}

function str_fromch(s, ch, m) {
  let index = s.indexOf(ch);
  if (index === -1) {
    return null;
  }
  return substring(s, index, m);
}

function str_fromstr(s, inStr, m) {
  let index = s.indexOf(inStr);
  if (index === -1) {
    return null;
  }
  return substring(s, index, m);
}

function TEST(A) {
  let r = A();
  if (r === null) {
    console.log("--error--");
  } else {
    console.log(r);
  }
}

const s = "hello world shortest program";

TEST(() => substring(s, 12, 5)); // get "short"
TEST(() => substring(s, 6, -1)); // get "world shortest program"
TEST(str_wholeless1); // "... progra"
TEST(() => str_fromch(s, "w", 5)); // "world"
TEST(() => str_fromstr(s, "ro", 3)); // "rog"
