# -*- coding: utf-8 -*-

#1.1
print("Як Вас звати?")
name = input()
print(f"Вітаю {name}")
print()

#1.2
num1 = int(input("Введіть перше число: "))
num2 = int(input("Введіть друге число: "))
print (f"{num1} + {num2} = {num1 + num2}")
print (f"{num1} - {num2} = {num1 - num2}")
print (f"{num1} * {num2} = {num1 * num2}")
print (f"{num1} / {num2} = {num1 / num2}")
print (f"{num1} // {num2} = {num1 // num2}")
print (f"{num1} % {num2} = {num1 % num2}")
print (f"{num1} ** {num2} = {num1 ** num2}")
print()

#1.3
years = int(input("Введіть свій вік: "))
print(f"Ваш вік у годинах {years * 8760}")
print()

#1.4
num = int(input("Введіть двозначне число: "))
first_digit = num // 10
second_digit = num - (first_digit * 10)
print(f"Сума цифр числа {num} = {first_digit + second_digit}")
print()

#1.5
x = int(input("Введіть x: "))
y = (2 * (x ** 4) + 2 * x -4) / (8 * x - 1)
print(f"y({x}) = {y}")
print()

#1.6
minutes = int(input("Введіть тривалість фільму у хвилинах: "))
hours = minutes // 60
minutes = minutes % 60
print(f"{hours} год. {minutes} хв.")
print()
