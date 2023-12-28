import pyautogui as rb
import pyperclip as clip
import time 
msg=clip.paste()
time.sleep(2)
while(rb.confirm('This displays text and has an OK and Cancel button.')=='Cancel'):
    time.sleep(5)
rb.write(msg)
#rb.press("enter")
print("pasted successfully !")
time.sleep(1)


#Read also about this
#p.waitForNewPaste(timeout=None)
#p.copy()
#p.waitForNewCopy()