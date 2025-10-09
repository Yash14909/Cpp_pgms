
---

# 🧮 C++ Constructor Demonstration

This C++ program demonstrates the **three types of constructors** used in object-oriented programming —
**Default Constructor**, **Parameterized Constructor**, and **Copy Constructor**.

The program defines a class `integer` that initializes and displays two integer values using these constructors.

---

## 🧱 **Concepts Covered**

* **Default Constructor** — initializes data members with default values
* **Parameterized Constructor** — initializes data members with user-provided values
* **Copy Constructor** — initializes an object using another existing object
* **Object Creation and Display Functions**
* Basic usage of **C++ Class & Object** concepts

---

## 📂 **File Information**

| File                   | Description                                                      |
| ---------------------- | ---------------------------------------------------------------- |
| `constructor-demo.cpp` | Demonstrates all three types of constructors with console output |

---

## 💡 **Program Explanation**

### 🧩 Class Definition

```cpp
class integer
{
    int m, n;
public:
    integer()  // Default Constructor
    {
        std::cout << "I am in default constructor" << std::endl;
        m = 0;
        n = 0;
    }

    integer(int x, int y)  // Parameterized Constructor
    {
        std::cout << "I am in parameterized constructor" << std::endl;
        m = x;
        n = y;
    }

    integer(const integer &obj)  // Copy Constructor
    {
        std::cout << "I am in copy constructor" << std::endl;
        m = obj.m;
        n = obj.n;
    }

    void display()
    {
        std::cout << "value of m: " << m << std::endl;
        std::cout << "value of n: " << n << std::endl;
    }
};
```

### 🧠 **Main Function**

```cpp
int main()
{
    integer i1;          // Calls default constructor
    i1.display();

    integer i2(10, 20);  // Calls parameterized constructor
    i2.display();

    integer i3 = i2;     // Calls copy constructor
    i3.display();

    return 0;
}
```

---

## ⚙️ **How to Compile and Run**

### ▶️ Using GCC / Command Line

```bash
g++ constructor-demo.cpp -o constructor-demo
./constructor-demo
```

### ▶️ Using Turbo C++

1. Open Turbo C++
2. Create a new file → Paste the code
3. Save as `constructor-demo.cpp`
4. Compile (`Alt + F9`)
5. Run (`Ctrl + F9`)

---

## 🧾 **Sample Output**

```
I am in default constructor
value of m: 0
value of n: 0

I am in parameterized constructor
value of m: 10
value of n: 20

I am in copy constructor
value of m: 10
value of n: 20
```

---

## 🎯 **Learning Outcome**

By running this program, you will understand:

* How constructors initialize objects in C++
* The difference between **default**, **parameterized**, and **copy constructors**
* The use of object copying and initialization through constructors

---

## 👨‍💻 **Author**

* Developed by:** Yashvardhan Reddy
* Language:** C++
* Topic:** Constructors in Object-Oriented Programming
* IDE Support:** Turbo C++, GCC, Code::Blocks, VS Code

---
