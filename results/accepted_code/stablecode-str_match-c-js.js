function startsWith(container, target) {
    var clen = container.length;
    var tlen = target.length;

    if (clen < tlen) return false;

    return substr_index(container, target) === 0;
}

function endsWith(container, target) {
    var clen = container.length;
    var tlen = target.length;

    if (clen < tlen) return false;

    return substr_index(container + clen - tlen, target) === 0;
}

function doesContain(container, target) {
    return indexOf(container, target)) !== -1;
}

// Additional JavaScript functions for handling the optional requirements: