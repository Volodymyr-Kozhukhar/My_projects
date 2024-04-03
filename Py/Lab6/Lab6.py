# -*- coding: cp1251 -*-
x = int(input("Введіть х: "))
y = int(input("Введіть y: "))

if x > 8:
    z = 3 + y
else:
    z = 9 * x + y
print(f"6.1 Z = {z}\n\n")

n = int(input("Введіть n: "))
z = 1
for i in range(1, n + 1):
    z *= i
print(f"6.2 Факторіал {n} = {z}")
