# -*- coding: cp1251 -*-
from math import sin


x = int(input("������ �: "))
n = int(input("������ n: "))

Production = 1
i = 1
while(i <= n):
    Production *= ((x - i) ** 2) / x
    i += 1
print(f"5.1 �������: {Production}")

num = int(input("������ ���������� �����: "))
num1 = num
simple_nums = []
while num > 1:
    if num % 2 != 0 and num % 3 != 0 and num % 5 != 0 and num % 7 != 0:
        simple_nums.append(round(num))
        break
    b = True
    while b:
        for i in range(2, 10):
            if num % i == 0:
                num = num / i
                simple_nums.append(i)
                b = False
                break
print(f"5.2 ������ ������� �������� ����� {num1}: {simple_nums}")

a = int(input("������ a: "))
b = int(input("������ b: "))
h = int(input("������ h: "))
print(f"5.3|x\t|\tF(x)|")
for i in range(a,b,h):
    y = sin(1/i) + 2
    print(f"|{i}\t|\t{round(y,2)}|")

str = input("5.4 ������ ϲ�: ")
print("���������: ", end = "")
for i in str:
    if i.isupper():
        print(f"{i}.", end ="")