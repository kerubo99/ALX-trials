# Python script with an if statement

# Get user input for age
age_str = input("Enter your age: ")

# Convert age input to an integer
age = int(age_str)

# Check if the person is eligible to vote
if age >= 18:
    print("You are eligible to vote.")
else:
    print("You are not eligible to vote yet.")

