# -*- coding: cp1251 -*-
import itertools

def bruteforce_attack(alphabet, max_length):
    for length in range(1, max_length + 1):
        for combination in itertools.product(alphabet, repeat=length):
            password = ''.join(combination)
            yield password
def main():
    # ������ ������������� �������
    alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;':\",./<>?"
    max_length = 5  # ������ ������������ ����� ������
    for password in bruteforce_attack(alphabet, max_length):
        print(password)
main()