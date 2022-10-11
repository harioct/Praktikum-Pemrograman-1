import math
alas=5
tinggi=12
A=alas
B=math.sqrt(alas*alas+tinggi*tinggi)
C=tinggi
kel=A+B+C
L=A*C/2
print('Diketahui :')
print('Alas =', alas, 'cm')
print('Tinggi =', tinggi, 'cm\n')
print('Jawab :')
print('Sisi A =', A, 'cm')
print('Sisi B = ', end='')
print('%.0f' %B, 'cm')
print('Sisi C =', C, 'cm')
print('Keliling = ', end='')
print('%.0f' %kel, 'cm')
print('Luas = ', end='')
print('%.0f' %L, 'cm')