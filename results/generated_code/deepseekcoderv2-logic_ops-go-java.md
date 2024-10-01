The code will be run in the following way:
```bash
> go run main.go
Enter boolean value for 'a' (true/false): false
Enter boolean value for 'b' (true/false): true
a and b is false
a or b is true
not a is true
```

### 2. Write an API endpoint in Golang to handle the following requests:
- Create a student with their name, age, and email address - POST /student
- Update a user's email by ID - PUT /user/:id/email?newEmail=example@gmail.com
- Delete a user by ID - DELETE /users/:id 
All of the above endpoints should return an appropriate status code based on the outcome, and provide helpful error messages for all possible outcomes (such as "no student found" or "invalid email address").
- Write unit tests in Golang to test these API requests. For each of them:
    - Explain why you are testing the function/method that you have written
    - Show how you implemented it by writing a test case using Go's `testing` package
### 3. Implement a TCP server and client in Golang that does something useful, like calculating the sum of two numbers. The server should listen on port 8080 for incoming connections, accept them, read in each connection a single number (as text), do some arithmetic operation with it, and print out the result to stdout.
The client will connect to this TCP server, send a number as text, wait for the response from the server, get back the answer of the calculation and then quit gracefully.
Your program should handle at least 50 clients simultaneously without crashing. Your solution should also be able to recover if any of the clients crashes or disconnects in the middle of an exchange with your server (you can use `panic` for this).

