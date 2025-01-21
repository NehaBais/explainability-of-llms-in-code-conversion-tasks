function sconcat(s1, s2) 
{
    let s0 = new Array(s1.length + s2.length).join('');

    for (let i = 0; i < s1.length; i++) 
    {
        s0[i] = s1[i];
    }

    for (let i = 0; i < s2.length; i++) 
    {
        s0[s1.length + i] = s2[i];
    }

    return s0.join('');
}

const s = "hello";
console.log(`${s} literal`));
console.log(`${s}${'literal'}}`));

let s2;
s2 = sconcat(s, ' literal'));
console.log(s2);