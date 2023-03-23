Write a C++ program that demonstrates inheritance using a base class called "Animal" and two derived classes called "Dog" and "Cat". The "Animal" class should have private data members for "name" and "age", as well as public member functions for setting and getting those values. The "Dog" and "Cat" classes should inherit from "Animal" and each have a unique public member function called "speak" that outputs a message specific to the animal (e.g. "Woof!" for a dog and "Meow!" for a cat). The program should create instances of each class, set their name and age values, and call their speak function to output their respective messages.

Your program should include the following functions:

A constructor for the Animal class that initializes its name and age data members.
A constructor for the Dog class that calls the Animal constructor and sets a default value for the name.
A constructor for the Cat class that calls the Animal constructor and sets a default value for the age.
Getter and setter functions for the name and age data members in the Animal class.
The speak function for the Dog class that outputs "Woof!".
The speak function for the Cat class that outputs "Meow!".
Your program should output the following messages to the console:

"My name is Fido and I am 5 years old. Woof!"
"My name is Mittens and I am 3 years old. Meow!"

