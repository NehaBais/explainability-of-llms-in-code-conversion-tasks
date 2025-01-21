Sure, I can help with that. The errors you are getting are:
1. `sprintf` is deprecated and its usage could lead to security vulnerabilities. 
2. You're trying to open a file before it has been created (you have used O_TRUNC flag).
3. You're using undeclared identifiers `O_WRONLY`, `O_CREAT` and `O_TRUNC`.
4. The directory creation is failing with error message.
