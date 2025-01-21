if len(originalString)+len(cstr)+len(cstr2) > cap(newString) { 
    // method 1
    newString = originalString + cstr

    // method 2
    x := len(originalString)
    newString = fmt.Sprintf("%s", originalString[0:x] + cstr2)
}