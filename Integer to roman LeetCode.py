class Solution:
    def intToRoman(self, num: int) -> str:
        mymap={}
        mymap[1]='I'
        mymap[2]='II'
        mymap[3]='III'
        mymap[4]='IV'
        mymap[5]='V'
        mymap[6]='VI'
        mymap[7]='VII'
        mymap[8]='VIII'
        mymap[9]='IX'
        mymap[10]='X'
        mymap[20]='XX'
        mymap[30]="XXX"
        mymap[40]='XL'
        mymap[50]='L'
        mymap[90]='XC'
        mymap[100]='C'
        mymap[400]='CD'
        mymap[500]='D'
        mymap[900]='CM'
        mymap[1000]='M'
        roman=""
        for i in range(len(str(num))):
            j=i
            value=int(str(num)[i])
            while j<len(str(num))-1:
                value*=10
                j+=1
            if value in mymap:
                roman+=mymap[value]
            else:
                if value==0:
                    continue
                if value>10 and value<40:
                    roman+=int(value/10)*(mymap[10])
                elif value>50 and value<90:
                    value-=50
                    roman+=mymap[50]
                    roman+=int(value/10)*(mymap[10])
                elif value>100 and value <400:
                    roman+=int(value/100)*(mymap[100])
                elif value>500 and value<900:
                    value-=500
                    roman+=mymap[500]
                    roman+=int(value/100)*(mymap[100])
                elif value>1000 and value<4000:
                    roman+=int(value/1000)*(mymap[1000])
        return roman
