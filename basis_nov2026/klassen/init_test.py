# dit is een python script om def __init__ te testen
from time import sleep
class testen_init: # klasse wordt gecreert
    def __init__(self,name,waarde): # initialiseer __init__ functie
        self.name = name
        self.waarde = waarde
        print(f" De naam is: {self.name}")
        print(f"De waarde is: {self.waarde}")
        c1 = 88
        c2 = 9
        self.val1 = c1
        self.val2 = c2
        
        
t1 = testen_init("dawsatek22",99)
sleep(2)
print(f" de waarde is nu  {t1.name,t1.waarde + 8}")
