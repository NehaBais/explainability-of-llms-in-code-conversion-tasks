function str_fromstr(s, substring, m) {
  let pos = s.indexOf(substring);
  if (pos === -1) return null;
  else return substring(s, pos, m);
}
