import pyautogui as rb
import time 
rb.alert("Goto To At Your Location You have 5 sec:",title="Message Bomber")
time.sleep(5)
while(rb.confirm('Have You Placed Your Cursor At Your Place:',title="tiktic")=='Cancel'):
    time.sleep(5)
msg=rb.prompt("Enter Your Message:",title="To Cancel,Press cancel button Anytime")
if msg==None:
    exit
no=rb.prompt("Enter Number of times you Want to Send:",title="To Cancel,Press cancel button Anytime")
if no==None:
    exit

for i in range(0,int(no)):
    rb.write(msg)
    rb.press("enter")
    time.sleep(1)


