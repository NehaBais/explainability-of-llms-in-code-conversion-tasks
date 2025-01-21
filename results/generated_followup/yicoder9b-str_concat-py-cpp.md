The error message is telling us that we are missing a semicolon at the end of our declaration statement. C++ requires all statements to end with a semicolon.

To fix this, simply add a semicolon after the closing brace of your vector declaration: `std::vector<std::string> vec{s1, "world", "mom"};`
