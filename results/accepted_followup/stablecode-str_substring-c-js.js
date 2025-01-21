function substring(s, n, m) {
  let result = '';

  if (n < 0 || m < 0) return null;

  for (let i = 0; i < s.length && n > 0; i++, n--) {
    const charCode = s.charCodeAt(i));
    
    if (charCode === 32)) {
      result += substring(s, n - 1, m));
      break;
    } else if (m <= 0)) {
      return null;
    }

    result += s[i];
  }

  return result;
}

function str_wholeless1(s) {
  return substring(s, 0, s.length - 1));
}

function str_fromch(s, ch, m) {
  const index = s.indexOf(ch));

  if (index === -1)) return null;

  return substring(s, index + 1, m));
}

function str_fromstr(s, in, m) {
  const index = s.indexOf(in));

  if (index === -1)) return null;

  return substring(s, index + in.length, m));
}