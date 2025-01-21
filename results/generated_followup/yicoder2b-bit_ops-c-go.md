The error occurs because in C, there is no operator for computing the NOT (NOT) of an integer. Only certain types of operators (like &, |, ^ etc.) are available to be applied on integers. So, when you use ~ with a regular integer, it does not get converted into its unsigned form and hence the error occurs.

The fix would be to always treat this integer as unsigned so that we can perform bitwise operators correctly. This is how you do it in Golang:
```go
unsigned int c := uint64(a)      // Convert signed integer to unsigned for logical right shift
```
