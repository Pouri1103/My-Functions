# My-Functions

This project contains a set of functional functions written in C++ language and can be used in ***Qt/C++*** projects and is designed for various common tasks such as generating random numbers and calculating the execution time of a code and other useful operations.

- [Random](#Randomcpp)
- [Time](#Timecpp)

<br>

---
---

<br>

## Random.cpp

This function generates a random number based on your needs, which can either be a single-digit, double-digit, triple-digit number, etc. , or within a specified range.

```cpp
//len is the length or digits

random(int len);
```

```cpp
//low the bottom and high the top of the range

random(int low , int high);
```

> [!WARNING]\
> The last number that can be generated is **2'147'483'647**

<br>

---
---

<br>

## Time.cpp

This function works in such a way that it has a **Start** function which you call before your code, and an **End** function which you call after your code. This function provides you with the amount of time taken to execute your code, either as a number or as a string.

```cpp
//You write this function before your code

Start();
```

```cpp
//You write this function after your code and it will give you an integer

End();	//int End()
```

```cpp
//This function is the same as the previous function and the value it wants is not important, 
//but this function prints a text in the console
//That is, for example 1300 ms

End(int);	// End(1); or End (0);
```

<br>

---
---

<br>