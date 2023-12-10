import pyautogui as rb
import time 
msg=input("Enter message")
number=int(input("Enter no:"))

time.sleep(5)
while(rb.confirm('Have You Placed Your Cursor At Your Place:',title="tiktic")=='Cancel'):
    time.sleep(5)
for i in range(0,number+1):
    rb.write(msg)
    rb.press("enter")
    time.sleep(1)