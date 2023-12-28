import pyautogui as rb
import pyperclip as clip
import time 
f=open('myfile.txt','r')
msg=f.read();
list1=msg.split('\n')
time.sleep(2)
while(rb.confirm('press ok button if you placed the cursor other wise press cancel',title="Deepak Asking:)")=='Cancel'):
    time.sleep(5)
# rb.write(msg)
print(list1)
for i in list1:
    i=i.lstrip()
    if(i==""): 
        continue
    for c in i:
        rb.write(c,.1)
    rb.press("enter")
    time.sleep(.2)
f.close()
time.sleep(1)




'''
#Uncomment this for fast writing
import pyautogui as rb
import pyperclip as clip
import time 
f=open('myfile.txt','r')
msg=f.read();
list1=msg.split('\n')
time.sleep(2)
while(rb.confirm('press ok button if you placed the cursor other wise press cancel',title="Deepak Asking:)")=='Cancel'):
    time.sleep(5)
# rb.write(msg)
print(list1)
for i in list1:
    i=i.lstrip()
    if(i==""): 
        continue
    rb.write(i,.1)
    rb.press("enter")
    time.sleep(.2)
f.close()
time.sleep(1)
'''