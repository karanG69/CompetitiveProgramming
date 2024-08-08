class Solution {
public:
    string helper(int num){
        unordered_map<int,string> myMap;
        myMap[1] = "One";
        myMap[2] = "Two";
        myMap[3] = "Three";
        myMap[4] = "Four";
        myMap[5] = "Five";
        myMap[6] = "Six";
        myMap[7] = "Seven";;
        myMap[8] = "Eight";
        myMap[9] = "Nine";
        myMap[10] = "Ten";
        myMap[11] = "Eleven";
        myMap[12] = "Twelve";
        myMap[13] = "Thirteen";
        myMap[14] = "Fourteen";
        myMap[15] = "Fifteen";
        myMap[16] = "Sixteen";
        myMap[17] = "Seventeen";
        myMap[18] = "Eighteen";
        myMap[19] = "Nineteen";
        myMap[20] = "Twenty";
        myMap[30] = "Thirty";
        myMap[40] = "Forty";
        myMap[50] = "Fifty";
        myMap[60] = "Sixty";
        myMap[70] = "Seventy";
        myMap[80] = "Eighty";
        myMap[90] = "Ninety";
        if(num<=19){
            return myMap[num];
        }       
        else if(num<=99){
            int ones = num%10;
            int tens = num-ones;
            if(ones == 0){
                return myMap[tens];
            }
            else{
                return myMap[tens] + " " + myMap[ones];
            }
        }
        else{
            int hundred = (num-(num%100))/100;
            int tens = num%100;
            if(tens == 0){
                return myMap[hundred] + " " + "Hundred";
            }
            if(tens<=19){
                return myMap[hundred] + " " + "Hundred" + " " + myMap[tens];
            }
            else{
                int ones = tens%10;
                if(ones==0){
                    return myMap[hundred] + " " + "Hundred" + " " + myMap[tens];
                }
                else{
                    tens-=ones;
                    return myMap[hundred] + " " + "Hundred" + " " + myMap[tens] + " " + myMap[ones];
                }
            }
        }
    }
    string numberToWords(int num) {
        if(num==0){
            return "Zero";
        }
        if(num>999999999){//billions
            int hundreds = num%1000;
            int thousands = ((num%1000000)-(hundreds))/1000;
            int millions = ((num%1000000000)-((thousands*1000)+hundreds))/1000000;
            int billions = ((num%10000000000)-((millions*1000000)+(thousands*1000)+hundreds))/1000000000;
            if((millions == 0 && thousands == 0) && (hundreds == 0)){
                return helper(billions) + " " + "Billion";
            }
            else if (hundreds == 0){
                if(millions==0){
                    return helper(billions) + " " + "Billion" + " " + helper(thousands) + " " + "Thousand";
                }
                else{
                    return helper(billions) + " " + "Billion" + " " + helper(millions) + " " + "Million";
                }
            }
            else if(millions == 0 && thousands == 0){
                return helper(billions) + " " + "Billion" + " " + helper(hundreds);
            }
            return helper(billions) + " " + "Billion" + " " + helper(millions) + " " + "Million" + " " + helper(thousands) + " " + "Thousand" + " " + helper(hundreds);
        }
        else if(num>999999){//millions
            int hundreds = num%1000;
            int thousands = ((num%1000000)-(hundreds))/1000;
            int millions = ((num%1000000000)-((thousands*1000)+hundreds))/1000000;
            if(hundreds==0 && thousands==0){
                return helper(millions) + " " + "Million";
            }
            else if(hundreds==0){
                return helper(millions) + " " + "Million" + " " + helper(thousands) + " " + "Thousand";
            }
            else if(thousands==0){
                return helper(millions) + " " + "Million" + " " +  helper(hundreds);
            }
            return helper(millions) + " " + "Million" + " " + helper(thousands) + " " + "Thousand" + " " +  helper(hundreds);
        }
        else if(num>999){//thousands
            int hundreds = num%1000;
            int thousands = ((num%1000000)-(hundreds))/1000;
            if(hundreds==0) return helper(thousands) + " " + "Thousand";
            return helper(thousands) + " " + "Thousand" + " " + helper(hundreds);
        }
        else{//hundreds
            return helper(num);
        }
    }
};
