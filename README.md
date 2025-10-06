
---

```markdown
# 🧱 C++ Constructors Demonstration

This project demonstrates the use of **default**, **parameterized**, and **copy constructors** in C++.  
It shows how constructors are invoked automatically during object creation and how data members are initialized in each case.

---

## 🧩 Project Structure

```
```
constructors-demo/
│
├── constructors.cpp     # Main C++ source file
└── README.md            # Project documentation
```

````

---

## 💻 Code

```cpp
#include <iostream>

class integer
{
    int m, n;

public:
    integer()
    {
        std::cout << "I am in default constructor" << std::endl;
        m = 0;
        n = 0;
    }

    integer(int x, int y)
    {
        std::cout << "I am in parameterized constructor" << std::endl;
        m = x;
        n = y;
    }

    integer(const integer &obj)
    {
        std::cout << "I am in copy constructor constructor" << std::endl;
        m = obj.m;
        n = obj.n;
    }

    void display()
    {
        std::cout << "value of m: " << m << std::endl;
        std::cout << "value of n: " << n << std::endl;
    }
};

int main()
{
    integer i1;        // Default constructor
    i1.display();

    integer i2(10, 20); // Parameterized constructor
    i2.display();

    integer i3 = i2;    // Copy constructor
    i3.display();

    return 0;
}
````

---

## 🧠 Explanation

### 🔹 1. **Default Constructor**

* Called when an object is created without any arguments.
* Initializes data members `m` and `n` to `0`.

### 🔹 2. **Parameterized Constructor**

* Called when arguments are passed during object creation.
* Initializes data members `m` and `n` using provided values.

### 🔹 3. **Copy Constructor**

* Called when a new object is created as a copy of an existing object.
* Copies values of data members from the source object.

---

## ▶️ How to Run

1. Save the code as `constructors.cpp`.
2. Open your terminal and navigate to the file’s location.
3. Compile the program:

   ```bash
   g++ constructors.cpp -o constructors
   ```
4. Run the executable:

   ```bash
   ./constructors
   ```

---

## 📟 Sample Output

```
I am in default constructor
value of m: 0
value of n: 0

I am in parameterized constructor
value of m: 10
value of n: 20

I am in copy constructor constructor
value of m: 10
value of n: 20
```

---

## 🧩 Concepts Demonstrated

* Constructor overloading
* Copy constructor usage
* Object initialization
* Class member access
* C++ object lifecycle

---

## 💡 Tip

If you don’t define a **copy constructor**, C++ automatically generates a **default copy constructor** that performs a shallow copy.
Defining your own copy constructor allows **customized copy behavior**.

```
---
```
