# -*- coding: cp1251 -*-
x = int(input("������ �: "))
y = int(input("������ y: "))

if x > 8:
    z = 3 + y
else:
    z = 9 * x + y
print(f"6.1 Z = {z}\n\n")

n = int(input("������ n: "))
z = 1
for i in range(1, n + 1):
    z *= i
print(f"6.2 �������� {n} = {z}")
