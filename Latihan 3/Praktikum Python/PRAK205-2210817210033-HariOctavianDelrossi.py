import math

A=int(input('Masukkan nilai A: '))
B=int(input('Masukkan nilai B: '))

##Mencari Alas
C=math.sqrt((B*B)-(A*A))
print('\nAlas= ',end='')
print('%d' %C, 'cm')

##Mencari Tinggi
print('Tinggi=',A,'cm')

##Mencari Keliling
K=A+B+C
print('Keliling= ',end='')
print('%d' %K, 'cm')

##Mencari Luas
L=0.5*C*A
print('Luas= ',end='')
print('%d' %L, 'cm^2')