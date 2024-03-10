# -*- coding: cp1251 -*-
from math import cos

#2.1
from math import cos
from turtle import distance


first_catheter = int(input("Введіть перший катет трикутника: "))
second_catheter = int(input("Введіть другий катет трикутника: "))
hypotinase = (first_catheter ** 2 + second_catheter ** 2) ** 0.5
print(f"Гіпотенуза трикутника =  {hypotinase} \n")

#2.2
height = int(input("Введіть висоту трикутника: "))
base = int(input("Введіть основу трикутника: "))
t_area = (height * base) * 0.5
print(f"Гіпотенуза трикутника =  {t_area} \n")

#2.3
x1 = int(input("Введіть координату х1: "))
y1 = int(input("Введіть координату у1: "))
x2 = int(input("Введіть координату х2: "))
y2 = int(input("Введіть координату у2: "))
distance = ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5
print(f"Відстань між координатами: {distance} \n")

#2.4
x = int(input("Введіть х: "))
y = int(input("Введіть y: "))
if x > 8:
    z = 3 + y
else:
    z = (9 * x) * y
print(f"z = {z}\n")

#2.5
y = int(input("Введіть y: "))
n = int(input("Введіть n: "))
H = (y ** 2 - 0.8 * y + y ** 0.5)/(23.1 * n ** 2 + cos(n))
print(f"H = {H}\n")

#2.6
x = 5
y = 0.6
print("0.15y + x < xy < |x/y|   ", end='')
if (0.15 * y + x < x * y) and (x * y < abs(x/y)):
    print("True    ", end = '')
else:
    print("False    ", end = '')
print("при х = 5 та у = 0.6\n")