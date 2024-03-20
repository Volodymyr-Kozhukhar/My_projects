# -*- coding: cp1251 -*-
from os import replace


s = "Кожухарь Володимир Олександрович"
length = len(s)
print(f"2.1\n{s}")
print(f"Третій символ рядка: {s[2]}")
print(f"Передостанній символ рядка: {s[-2]}")
print(f"Перші п'ять символів рядка: {s[:5]}")
print(f"Рядок без двох останніх символів: {s[:-2]}")
print(f"Символи з парними індексами: {s[:-1:2]}")
print(f"Символи з непарними індексами: {s[1:-1:2]}")
print(f"Рядок у зворотньому порядку: {s[::-1]}")
print(f"Символи через один у зворотньому порядку: {s[::-2]}")
print(f"Довжина рядка: {length}")
print (f"2.2    Розрізаний рядок на дві частини: ", end = "")
print(s[(length//2):] + s[:(length//2)])
print(f"2.3    Рядок з видаленим елементом: {s[:length//2] + s[(length//2 + 1):]}")
print(f"2.4    Рядок з видаленими елементами індекси яких діляться на 3: ", end = "")
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
print(f"Доданий елемент: {numbers}")
numbers.sort()
print(f"мінімальний елемент: {numbers[0]}\nмаксимальний елемент: {numbers[-1]}")
numbers.append('Кожухарь Володимир')
print(f"моє ім'я': {numbers}")
print(f"Кількість елементів: {len(numbers)}\n\n")

A = [20, 50 ,16 ,81 ,12 ,5 ,67 , 8, 10, 11]
B = [20, 15, 30, 5, 35, 10, 15, 5, 15, 50]
C = ['ручка','карандаш','коректор','кнопка','степлер','резинка','зошит','обкладинка','лінійка','коректор'] 

sum = 0
avg = 0
i = 0
while i < 10:
    sum += A[i] * B[i]
    avg += B[i]
    i += 1
print(f"Загальна вартість товарів: {sum}")
print(f"Середня ціна товарів: {avg/10}")
index = 0
max = A[0]
i = 1
while i < 10:
    if A[i] > max:
        max = A[i]
        index = i
    i += 1
print(f"Максимальна кількість товару на складі: {C[index]}\n\n")


a1 = []
a2 = []
a = range(-50, 51)
print(f"А - Всі елементи: {list(a)}")
print()

i = 0
while i < len(a):
    if a[i] > 0:
        a1.append(a[i])
    elif a[i] < 0:
        a2.append(a[i])
    i += 1
print(f"А1 - Додатні елементи: {a1}\n")
print(f"А2 - Від'ємні елементи: {a2}\n\n")

str = "Володимир, 1 курс, спеціальність 121"
print(f"Ім'я, курс, спеціальність: {str}")
index = str.find('курс,')
if index != -1 :
    print(f"Курс: {str[index:index + 5]}")
else:
    print("немає курс")
str = str.replace("Володимир", "Кожухарь")
print(f"Зміна ім'я на прізвище: {str}")
words_num = 0;
i = 0
while i < len(str):
    if str[i] == ' ':
        words_num += 1
    i += 1
if str[-1] != ' ':
    words_num += 1
print(f"Кількість слів у рядку: {words_num}\n\n")

N = range(1,11)
A1 = []
A2 = []
print(f"Список: {list(N)}")

for j in N:
    if j % 2 == 0:
        A1.append(j ** 2)
    else:
        A2.append(j ** 3)
print(f"A1 - Квадрат числа парних елементів: {A1}")
print(f"A2 - Куб числа непарних елементів: {A2}")