import pyautogui as rb
import pyperclip as clip
import time 

    

msg='##'
while(msg!=''):
    response=rb.confirm('1. First click on copy, 2. place cursor. 3. click ok :',title="Deepak Asking", buttons=['Ok','Cancel'])
    if response=='Ok':
        msg=clip.paste()
        if msg!='' and msg!=None:  
            l=msg.split('#')
            # print(l)
            for text in range(0,len(l)-1):
                rb.write(l[text])
                rb.press("tab")
                # time.sleep(.01)
        rb.press("enter")
    else:
        msg=''
    