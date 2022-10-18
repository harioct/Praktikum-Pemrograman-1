pi=3.142857

r=int(input('Masukkan jari-jari: '))
t=int(input('Masukkan tinggi: '))

v=pi*r*r*t
print('\nVolume= ',end='')
print('%.2f' %v)
l=2*pi*r*(r+t)
print('Luas= ',end='')
print('%.2f' %l)
k=2*pi*r
print('Keliling= ',end='')
print('%.2f' %k)