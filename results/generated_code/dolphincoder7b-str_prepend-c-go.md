Here is the equivalent Golang code:
```go
package main
import (
    "fmt"
    "strings"
    "runtime"
    "unsafe"
    "syscall/js"
)

func main() {
    str := js.Global().Get("document").Call("getElementById", "p1").Get("innerHTML").String()
    cstr := "Changed  "

    // Convert the Go string to a C string for the C function call.
    cStr := js.NewCallback(func(args []js.Value) {
        fmt.Println("Hello from JavaScript")
    })

    // Call the C function, passing in the C string and the callback.
    syscall.CallSyscall(140732589683296, uintptr(unsafe.Pointer(&cstr)), 1, js.Value{}, cStr)

    dup := strings.TrimSpace(str)

    // Convert the Go string back to a C string for the C function call.
    dupCstr := js.NewCallback(func(args []js.Value) {
        fmt.Println("Hello from JavaScript")
    })
    
    // Call the C function, passing in the C string and the callback.
    syscall.CallSyscall(140732589683296, uintptr(unsafe.Pointer(&dup)), 1, js.Value{}, dupCstr)
}
```
This code uses syscalls to call functions from the C library (syscall.CallSyscall). Note that Golang does not support the sprintf function, so we have had to use Go's fmt package and JavaScript as an intermediary. The main idea here is to create a callback in JavaScript to replace the C string with the modified value. The callback can then be passed back into the C code for further manipulation.

