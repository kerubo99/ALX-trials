#!/usr/bin/python3
#age calculator
yob = input('WHAT IS YOUR YEAR OF BIRTH: ')
mob = input('WHAT IS YOUR MONTH OF BIRTH(0-12): ')
dob = input('WHAT IS YOUR DATE OF BIRTH: ')
current_year = input('WHAT IS YOUR CURRENT YEAR?')

#calculate the year
age = int(current_year) - int(yob)

print('YOUR DATE OF BIRTH IS: ', end= ' ')
print( yob, '-', mob, '-', dob)

#display the age
print('YOU ARE', age, end= ' ')
print('YEARS OLD')

