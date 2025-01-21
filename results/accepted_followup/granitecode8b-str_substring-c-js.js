function str_fromstr(s, inStr, m) {
  let index = s.indexOf(inStr);
  if (index === -1) {
    return null;
  }
  return substring(s, index - n, m);
}
