class method_test1:
    def __init__(self,v1=8,v2=9,name="jona"):
        self.name = name
        self.val1 = v1
        self.val2 = v2
        print(f"val1 = {self.val1}")
        print(f"val2 = {self.val2}")
        print(f"de naam is {self.name}")
    def ab(self,a=3,b=10):
        c = a +b
        print(f"ab is :{c}")
        return c
    def ab2(self,a=2,b=10):
        c = a * b
        print(f"ab2 is :{c}")
        return c
                
                
mt1 = method_test1(name="jack",v1=99)

print(f"ab2 is : {mt1.ab2(3,10)}")