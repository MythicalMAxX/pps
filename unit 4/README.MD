Recurssion
Recurssion is a method which calls the same function directly or inderctly until the given condition is true. Recurssion can also run infinetely if no conditions is privided.

For example1. Recurssion using int function.
```c
   int func(){
     body;
     if (condition)
       return func();
     else
       return 0;
     }
```
 
So what does the above function does🤔?
this functions calls itself until it's condition is true
else it will return 0; which basically means end of program or simply you can say it will stop the program.

Example 2. Recurssion using void function.
```c
void func(){
  body;
  if (condition)
    func();
  }
 ```
What the difference here?
We are'nt using else statement because void functions never return any values.
This function will first executes it body and then check for condition if true it will call itself untill the condition is false. After the condition is false it will execute the next line of main function.

Example 3. Recurssion with infite run time.
```c
Using int function.
  int func(){
    body;
    func();
    return 0;
  }
``` 
  In this case we are returning a 0 value but it won't get executed because we have been calling func() again n again.
```c  
Using void function.
  void func(){
    body;
    func();
  }
```  
We can also pass values to function depending on our requirements.
