# -*- coding: cp1251 -*-
from os import replace


s = "�������� ��������� �������������"
length = len(s)
print(f"2.1\n{s}")
print(f"����� ������ �����: {s[2]}")
print(f"������������ ������ �����: {s[-2]}")
print(f"����� �'��� ������� �����: {s[:5]}")
print(f"����� ��� ���� ������� �������: {s[:-2]}")
print(f"������� � ������� ���������: {s[:-1:2]}")
print(f"������� � ��������� ���������: {s[1:-1:2]}")
print(f"����� � ����������� �������: {s[::-1]}")
print(f"������� ����� ���� � ����������� �������: {s[::-2]}")
print(f"������� �����: {length}")
print (f"2.2    ��������� ����� �� �� �������: ", end = "")
print(s[(length//2):] + s[:(length//2)])
print(f"2.3    ����� � ��������� ���������: {s[:length//2] + s[(length//2 + 1):]}")
print(f"2.4    ����� � ���������� ���������� ������� ���� ������� �� 3: ", end = "")
i = 0
while(i < length):
    if i % 3 != 0 or i == 0:
        print(s[i], end = "")
        i += 1
    else:
        i+=1
print(f"\n2.5   {s[0] + s[-2:0:-1] + s[-1]}\n\n")

numbers = [1,2,3,4,5,6]
print(f"3.1\n{numbers}")
numbers.insert(1, -5)
print(f"������� �������: {numbers}")
numbers.sort()
print(f"��������� �������: {numbers[0]}\n������������ �������: {numbers[-1]}")
numbers.append('�������� ���������')
print(f"�� ��'�': {numbers}")
print(f"ʳ������ ��������: {len(numbers)}\n\n")

A = [20, 50 ,16 ,81 ,12 ,5 ,67 , 8, 10, 11]
B = [20, 15, 30, 5, 35, 10, 15, 5, 15, 50]
C = ['�����','��������','��������','������','�������','�������','�����','����������','�����','��������'] 

sum = 0
avg = 0
i = 0
while i < 10:
    sum += A[i] * B[i]
    avg += B[i]
    i += 1
print(f"�������� ������� ������: {sum}")
print(f"������� ���� ������: {avg/10}")
index = 0
max = A[0]
i = 1
while i < 10:
    if A[i] > max:
        max = A[i]
        index = i
    i += 1
print(f"����������� ������� ������ �� �����: {C[index]}\n\n")


a1 = []
a2 = []
a = range(-50, 51)
print(f"� - �� ��������: {list(a)}")
print()

i = 0
while i < len(a):
    if a[i] > 0:
        a1.append(a[i])
    elif a[i] < 0:
        a2.append(a[i])
    i += 1
print(f"�1 - ������ ��������: {a1}\n")
print(f"�2 - ³�'��� ��������: {a2}\n\n")

str = "���������, 1 ����, ������������ 121"
print(f"��'�, ����, ������������: {str}")
index = str.find('����,')
if index != -1 :
    print(f"����: {str[index:index + 5]}")
else:
    print("���� ����")
str = str.replace("���������", "��������")
print(f"���� ��'� �� �������: {str}")
words_num = 0;
i = 0
while i < len(str):
    if str[i] == ' ':
        words_num += 1
    i += 1
if str[-1] != ' ':
    words_num += 1
print(f"ʳ������ ��� � �����: {words_num}\n\n")

N = range(1,11)
A1 = []
A2 = []
print(f"������: {list(N)}")

for j in N:
    if j % 2 == 0:
        A1.append(j ** 2)
    else:
        A2.append(j ** 3)
print(f"A1 - ������� ����� ������ ��������: {A1}")
print(f"A2 - ��� ����� �������� ��������: {A2}")