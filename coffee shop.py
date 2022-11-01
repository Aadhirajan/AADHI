#lets start a coffee shop together!! we are going to build a coffee shop using some new python programming concepts!!

#lets build robot barista!!

print("hello, welcome to coffee shop!!!!!")

name= input("what is your name?\n")

print ("hello "+ name + ", thank you so much for coming in today.\n\n\n")

menu= "black cofee, espresso, latee, cappucino"

print(name + ",what would you like from our menu today? here is our servings.\n" + menu)

order= input()
price= 8
quantity = input("How many coffees would you like?\n")
total = price * int(quantity)
print ("thank you. your total is: $"+ str(total))
print("sounds good " + name + ", we'll have your "+ quantity + " " + order + " ready for you in a moment.")

