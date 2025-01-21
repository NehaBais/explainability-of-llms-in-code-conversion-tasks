Sure! Here is the equivalent JavaScript code for the provided C functions:

```javascript
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
        if (s === '') {
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
TEST(() => str_fromch(s, 'w', 5)); // "world"
TEST(() => str_fromstr(s, "ro", 3)); // "rog"
```

### Explanation:

1. **substring function**:
   - Checks if the string `s` is null.
   - Handles negative values for `m`.
   - Ensures that `n` and `m` are non-negative.
   - Iterates through the string to find the starting point and extracts the substring of length `m`.

2. **str_wholeless1 function**:
   - Calls `substring` with `m` set to one less than the length of the string.

3. **str_fromch function**:
   - Finds the index of the character `ch` in the string.
   - If not found, returns null.
   - Otherwise, calls `substring` starting from that index.

4. **str_fromstr function**:
   - Finds the index of the substring `inStr` in the main string.
   - If not found, returns null.
   - Otherwise, calls `substring` starting from that index.

5. **TEST function**:
   - Calls a function and logs the result or an error message if the result is null.

This JavaScript code should work similarly to the provided C code, handling Unicode characters correctly due to JavaScript's native support for Unicode strings.
