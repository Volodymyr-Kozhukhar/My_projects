# -*- coding: cp1251 -*-
s = [2, 5, 9, 14, 20, 27]
print(f"������ s = {s}\n\n")
tmp = s.copy()
for i in range(len(tmp)):
    tmp[i] = tmp[i] ** 2
print(f"7.1 �������� ������ s: {tmp}")

tmp = s.copy()
for i in range(len(tmp)):
    tmp[i] = tmp[i] % 11
print(f"������� �� ������ �� 11, �������� s: {tmp}")

tmp = s.copy()
pair = []
for i in range(len(tmp)):
    if tmp[i] % 2 == 0:
        pair.append(tmp[i])
print(f"���� �������� s: {pair}")

nonpair = []
for i in range(len(tmp)):
    if tmp[i] < 10 and tmp[i] > 0 or tmp[i] > 99 and tmp[i] < 1000:
        nonpair.append(tmp[i])
print(f"�������� s � �������� ������� ����: {nonpair}")

double = []

for i in range(len(tmp)):
    if 
print(f"�������� s � �������� ������� ����: {nonpair}")
