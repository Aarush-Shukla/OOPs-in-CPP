# Object-Oriented Programming in C++

### Topics Covered:
- Procedure-Oriented Programming
- Object-Oriented Programming
- Class
- Object
- Constructor
- Destructor
- Encapsulation
- Abstraction
- Inheritance
- Access Specifiers
- Types of Inheritance
- Polymorphism
- Virtual Functions
- Differences between Compile-Time and Run-Time Polymorphism
- Friend Functions

## Procedure-Oriented Programming (POP)
POP was a conventional programming paradigm where high level languages like: C, COBOL, FORTRAN were used.

A program was divided into tasks which were grouped into functions (A function is a set of executable statements that performs a specific task).

To access data from various functions, we were required to make the data *global* (Global data is accessible from the entire program).

This led to certain *demerits* like:
1. It became difficult to track which function changed the data.
2. If data structure got changed, functions were required to be revised.

So, this led to another programming paradigm i.e. **Object-Oriented Programming**.

## Object-Oriented Programming (OOP)
The main focus was on *data*, instead of functions.

To avoid the unnecessary flow of data throughout the program, data is bound to the function using it.

A program is divided into **objects**. Each object has some data and functions.

Advantage: It protects data from accidental changes.

## Class
A Class is a fundamental unit of OOP.

It is a **user-defined** data type. It defines some data/properties and methods/functions.

## Object
An object is a variable of type Class.

Examples:
1. Class Fruit
- Properties: colour, taste
- Variables: mango, apple, grapes (Objects)

2. Class Student
- Properties: name, roll_number
- Method: get_marks()
- Variables of data type 'Student' are objects

Syntax of declaring a class:
```cpp
class ClassName {
    access_specifier:
        data_type1 data1;
        data_type2 data2;
};
```
Syntax of creating an object of a class:
```cpp
    ClassName object_name;
    //OR
    ClassName *object_name = new ClassName();
```
For coding implementation, refer to [this](classandobject.cpp).

> *Note*: By default, objects of a class are **private**. To access the properties, we need to use public.

## Constructor
A constructor is used to initialise an object with some values.

It is a function that is called when an object is created.

It has the same name as the class name.

There are 3 types of constructors:
1. **Default Constructor**: no arguments are passed
2. **Parameterised Constructor**: arguments are passed
3. **Copy Constructor**: initialises an object by using an another existing object

## Destructor
A destructor is a function that is called when an object is deleted.

Parameters cannot be passed into the destructor.

```delete``` keyword can be used for object pointer.

Syntax of creating a destructor:
```cpp
    ~ClassName()
```

For coding implementation, refer to [this](constructoranddestructor.cpp).

## Encapsulation
It is a property of OOPs that ensures binding of methods and variables together into a single unit i.e. Class.

Data is only accessible from the class methods (getters and setters).

Encapsulation also leads to data abstraction, that's why a class is called an Abstract Data Type (ADT).

For coding implementation, refer to [this](encapsulation.cpp).

## Abstraction
It is a property of OOPS that enables us to display only essential information while hiding unnecessary/implementation details.

Example: pow(x, y) -> x^y [how this function works is hidden]

## Inheritance
It is another property of OOPS where a class inherits properties of another class.

For 2 classes A and B where A ---> B,
**Parent/Super Class**: It is the class whose properties get inherited.
- Here, A is the parent class.

**Child/Sub Class**: It is the class that inherits properties of parent class.
- Here, B is the child class.

Advantage: It helps in code resuability.

## Access Specifiers
There are 3 types of Access Specifiers:
1. **public**: Data and functions can be accessed anywhere from the code
2. **private**: Data and functions are accessible only in own class
3. **protected**: Data and functions will are accessible in own class, parent class and derived/child class.

For coding implementation, refer to [this](accessspecifiersandmodesofinheritance.cpp).

## Types of Inheritence:
There are 5 types of Inheritance:
1. **Single Inheritence**: It is the most basic form of inheritance where a class inherits properties of another class.

Example: Class A ---> Class B

For coding implementation, refer to [this](singleinheritance.cpp).

2. **Multi-level Inheritence**: In this type of inheritance, parent class is derived from another class.

Example: Class A ---> Class B ---> Class C

For coding implementation, refer to [this](multilevelinheritance.cpp).

3. **Multiple Inheritence**: In this type of inheritance, a class inherits from multiple classes.

Example: Class A <--- Class C ---> Class B

For coding implementation, refer to [this](multipleinheritance.cpp).

4. **Hierarchical Inheritence**: In this type of inheritance, one parent class has multiple child classes.

Example: Class C <---- Class A ---> Class B

For coding implementation, refer to [this](hierarchicalinheritance.cpp).

5. **Hybrid Inheritence**: This type of inheritance is a combination of more than one type of inheritence.

Example: Class B <--- Class A ---> Class C ---> Class D

### Diamond Problem in Inheritance
Sometimes, a base class has multiple parent classes having a common ancestor. This is called as Diamond Problem in inheritance.

For coding implementation, refer to [this](diamondproblem.cpp).

## Polymorphism
It is the ability of the objects/methods to take different forms.

There are 2 types of Polymorphism:
1. **Compile-Time Polymorphism**: It is the form to be picked up at compile time.

It is seen through function or operator overloading:

(a) **Function Overloading**: It defines a number of functions with same function name but they perform differently according to the arguments passed (how many, type).

For coding implementation, refer to [this](functionoverloading.cpp).

(b) **Operator Overloading**: It gives a special meaning and functioning to different operators.

For coding implementation, refer to [this](operatoroverloading.cpp).

2. **Run-Time Polymorphism**: It is the form to be picked up at run time.

It is seen through function overriding:

**Function Overriding**: In this, the child class defines a function of parent class.

For coding implementation, refer to [this](functionoverriding.cpp).

## Virtual Functions
We use the ```virtual``` keyword for function overriding. Such type of functions are called as Virtual Functions.

### Differences between Compile-Time and Run-Time Polymorphism
| Compile-Time Polymorphism | Run-Time Polymorphism |
| -------- | ------- |
| It occurs at compile-time. | It occurs at run-time. |
| It is achieved through function and operator overloading. | It is achieved through function overriding. |
| Function names should be same, but parameters can be different. | Function names and parameters should be same. |
| It has faster execution time. | It has slower execution time. |
| It is more memory efficient. | It it less memory efficient. |

## Friend Function
It is a non-member function which can access private member of a class.

Syntax:
```cpp
    friend F1();
```

For coding implementation, refer to [this](friendfunction.cpp).

---