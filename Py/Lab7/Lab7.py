# -*- coding: cp1251 -*-
s = [2, 5, 9, 14, 20, 27]
print(f"������ s = {s}\n\n")
tmp = s.copy()
for i in range(len(tmp)):
    tmp[i] = tmp[i] ** 2
print(f"7.1 �������� ������ s: {tmp}")
tmp.clear()
tmp = s.copy()
for i in range(len(tmp)):
    tmp[i] = tmp[i] % 11
print(f"������� �� ������ �� 11, �������� s: {tmp}")