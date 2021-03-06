# 03_read_utf.py

f = open("샘플.txt", 'r')
while True:
    line = f.readline()[0:-1]
    if not line: break
    print(line)
f.close()
