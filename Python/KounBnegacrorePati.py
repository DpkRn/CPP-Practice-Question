import time
import os


class Question:
    question=""
    optA=""
    optB=""
    optC=""
    optD=""
    ans=""
    
    def __init__(self,question):
        self.question=question
    def setOption(self,optA,optB,optC,optD):
        self.optA=optA
        self.optB=optB
        self.optC=optC
        self.optD=optD
    def setAns(self,ans):
        self.ans=ans
    def setPrice(self,price):
        self.price=price
    def getQuestion(self):
        return self.question
    def getOpt(self):
        optlist=[self.optA,self.optB,self.optC,self.optD]
        return optlist
    def getAns(self):
        return self.ans
    def getPrice(self):
        return self.price


Que1=Question("1: The International Literacy Day is observed on")
Que1.setOption("A. Sep 8","B. Nov 28","C. May 2","D. Sep 22")
Que1.setAns("A")
Que1.setPrice(10000.00)

Que2=Question("2: The language of Lakshadweep. a Union Territory of India, is")
Que2.setOption("A. Tamil","B. Hindi","C. Malayalam","D. Telugu")
Que2.setAns("C")
Que2.setPrice(20000.00)

Que3=Question("3: In which group of places the Kumbha Mela is held every twelve years?")
Que3.setOption("A. Ujjain. Purl; Prayag. Haridwar","B. Prayag. Haridwar, Ujjain,. Nasik","C. Rameshwaram. Purl, Badrinath. Dwarika","D. Chittakoot, Ujjain, Prayag,'Haridwar")
Que3.setAns("B")
Que3.setPrice(30000.00)


Que4=Question("4: Bahubali festival is related to")
Que4.setOption("A.	Islam","B.	Hinduism","C. Buddhism","D. Jainism")
Que4.setAns("D.	Jainism")
Que4.setPrice(40000.00)

Que5=Question("5: Which day is observed as the World Standards  Day?")
Que5.setOption("A.	June 26","B.	Oct 14","C.	Nov 15","D.	Dec 2")
Que5.setAns("B")
Que5.setPrice(50000.00)

listQue=[Que1,Que2,Que3,Que4,Que5]

print("***ITS TIME TO PLAY GAME***")
print("Game Starts in 3 Second:",end=" ")
c=0
while(c<3):
    time.sleep(1)
    print(".",end=" ")
    c+=1
os.system('cls')
i=0
Amount =0

for Q in listQue:
    print(Q.getQuestion())
    options=Q.getOpt()
    print(options[0])
    print(options[1])
    print(options[2])
    print(options[3])
    ans=input("Enter your option:")
    if(ans==Q.getAns()):
        Amount=Amount+Q.getPrice()
        print("Your Answer Is Right")
    else:
        print("Your Answer Is Wrong")
        print(f"Won Amount is:{Amount}")
        print("You lost the game: your")
        break
        break
    print(f"Won Amount is:{Amount}")
    c=3
    print("Traversing in next Question in Second:",end="")
    while(c>0):
        print("....",end=" ")
        time.sleep(1)
        c-=1
    os.system('cls')
        
        







