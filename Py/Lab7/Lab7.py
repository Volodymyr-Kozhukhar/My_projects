# -*- coding: cp1251 -*-
s = [2, 5, 9, 14, 20, 27, 20, 14]
print(f"Список s = {s}\n\n")
tmp = s.copy()
for i in range(len(tmp)):
    tmp[i] = tmp[i] ** 2
print(f"7.1 Квадрати списку s: {tmp}")

tmp = s.copy()
for i in range(len(tmp)):
    tmp[i] = tmp[i] % 11
print(f"Залишки від ділення на 11, елементів s: {tmp}")

tmp = s.copy()
pair = []
for i in range(len(tmp)):
    if tmp[i] % 2 == 0:
        pair.append(tmp[i])
print(f"Парні елементи s: {pair}")

tmp = s.copy()
nonpair = []
for i in range(len(tmp)):
    if tmp[i] < 10 and tmp[i] > 0 or tmp[i] > 99 and tmp[i] < 1000:
        nonpair.append(tmp[i])
print(f"Елементи s з непраною кількістю цифр: {nonpair}")

double = []
tmp_word = {}
tmp = s.copy()
for i in tmp:
    tmp_word[i] = 0;
for i in tmp:
    if i > 9 and i < 100:
        tmp_word[i] += 1;
for i in tmp_word:
    if tmp_word[i] == 2:
        double.append(i)
print(f"Список, який складається лише з двозначних елементів s, записаних 2 рази підряд: {double}")

tmp = s.copy()
positions = []
for i in range(len(tmp)):
    if i % 3 != 0:
        positions.append(tmp[i])
print(f"Список, який складається з елементів s, які стоять на позиціях, не кратних 3: {positions}")

IntList = [12, 4, 5, 10, 9]
IntList.remove(IntList[0])
print(f"Список елементів: {IntList}")
IntList.sort()
print(f"Максимальний елемент списку з вилученим першим елементом: {IntList[-1]}")

city = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K"]
tmp = city[2]
city[2] = city[1]
city[1] = tmp
city.sort()
print(f"Список з заміненими 2 та 3 елементом, а потім відсортований: {city}")

