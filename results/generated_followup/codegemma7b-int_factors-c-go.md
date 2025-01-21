The error occurs because the variable `dvsr` is not defined within the scope of the `factor()` function. The fix is to declare the variable `dvsr` within the function.

```go
func factor(num int, fctrs *Factors) *Factors {
	dvsr := 1
	// ...
}
```
