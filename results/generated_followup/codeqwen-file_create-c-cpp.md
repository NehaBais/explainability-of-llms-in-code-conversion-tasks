Error: "If" is not declared.

Fix: Replace "If" with "if".

Corrected code block:
```cpp
if(dir_status == -1) {
    std::cerr << "Failed to create '/root/docs'\n";
    return -4;
}
```
