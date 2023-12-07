f=open('myfile.txt','w')
f.write("hi its me")
f.close()

f=open('myfile.txt','r')
content=f.read()
f.close()
print(content)

f=open('myfile.txt', 'a')
f.writelines('\n line1')
f.close()

f=open('myfile.txt','r')
content=f.read()
f.close()
print(content)

f=open('myfile.txt','r')
i=1
while True:
    line=f.readline()
    if(not line):
        break
    print(f"{i}th {line}")
    i=i+1
f.close()
