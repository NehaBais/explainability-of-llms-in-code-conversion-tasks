```javascript
function substring(s, n, m) {
    // check for null s
    if (null === s)
        return null;
    // negative m to mean 'up to the mth char from right'
    if (m < 0) 
        m = s.length + m - n + 1;

    // n < 0 or m < 0 is invalid 
    if (n < 0 || m < 0)
        return null;

    // make sure string does not end before n
    // and advance the "s" pointer to beginning of substring
    while (n > 0 && s.length > 0) {
        s = s.substring(1); 
        n--;
    }
    
    if (m === undefined || m <= 0) return '';

    let result = s.slice(0, Math.min(s.length, m)); 
    return result;
}

function str_wholeless1(s) {
    return substring(s, 0, s.length - 1);
}

function str_fromch(s, ch, m) {
    let index = s.indexOf(String.fromCharCode(ch)); 
    if (index === -1) 
        return null;

    return substring(s, index, m);
}

function str_fromstr(s, inStr, m) {
    let index = s.indexOf(inStr); 
    if (index === -1)
        return null;

    return substring(s, index, m);
}

const TEST = (A) => {  
    const r = A(); 
    if (!r) 
        console.log('--error--');  
    else 
        console.log(r); 
}; 

TEST(() => substring("hello world shortest program", 12, 5));    // get "short"
TEST(() => substring("hello world shortest program", 6, -1));     // get "world shortest program"
TEST(() => str_wholeless1("hello world shortest program"));      //  "hello wo... progra"
TEST(() => str_fromch("hello world shortest program", 'w'.charCodeAt(0), 5));    //  "world"
TEST(() => str_fromstr("hello world shortest program", 'ro', 3));     //  "rog"
```
