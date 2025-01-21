The error message states that there is no member named 'filesystem' in namespace 'std'. This indicates that std::filesystem library cannot be found or included properly, which may be due to missing necessary libraries or incorrect compiler flags.

To fix this issue, we need to include the necessary library. In C++17 and later versions, `<filesystem>` is a header-only library. So, no extra linking is required. It is only needed to include the header file:

```cpp
#include <filesystem>
```

After adding this line at the top of your code, it should compile without any errors.
