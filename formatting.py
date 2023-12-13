#!/usr/bin/python3

fname = input("Firstname: ")
surname = input("Surname: ")
age = int(input("Age: "))

#using old style formatting
print("Your name is %s %s aand you are %d years old" %(fname, surname, age))

print()
#using the style formatting (str.format())
print("Your name is {} {} and you are {} years old".format(fname, surname, age))

print()
print("Your name is {:s} {:s} and you are {:d} years old".format(fname, surname, age))

print()
#f-string formatting style
print(f"Your name is {fname} {surname} and you are {age} years old")

