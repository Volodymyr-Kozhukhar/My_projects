# -*- coding: cp1251 -*-
from math import cos

#2.1
from math import cos
from turtle import distance


first_catheter = int(input("������ ������ ����� ����������: "))
second_catheter = int(input("������ ������ ����� ����������: "))
hypotinase = (first_catheter ** 2 + second_catheter ** 2) ** 0.5
print(f"ó�������� ���������� =  {hypotinase} \n")

#2.2
height = int(input("������ ������ ����������: "))
base = int(input("������ ������ ����������: "))
t_area = (height * base) * 0.5
print(f"ó�������� ���������� =  {t_area} \n")

#2.3
x1 = int(input("������ ���������� �1: "))
y1 = int(input("������ ���������� �1: "))
x2 = int(input("������ ���������� �2: "))
y2 = int(input("������ ���������� �2: "))
distance = ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5
print(f"³������ �� ������������: {distance} \n")

#2.4
x = int(input("������ �: "))
y = int(input("������ y: "))
if x > 8:
    z = 3 + y
else:
    z = (9 * x) * y
print(f"z = {z}\n")

#2.5
y = int(input("������ y: "))
n = int(input("������ n: "))
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
print("��� � = 5 �� � = 0.6\n")