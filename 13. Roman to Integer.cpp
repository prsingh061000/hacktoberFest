class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='I'&&s[i+1]=='V')||(s[i]=='I'&&s[i+1]=='X'))
            {
                if(s[i+1]=='V')
                    n+=4;
                else
                    n+=9;
                i++;
            }
            else if((s[i]=='X'&&s[i+1]=='L')||(s[i]=='X'&&s[i+1]=='C'))
            {
                if(s[i+1]=='L')
                    n+=40;
                else
                    n+=90;
                i++;
            }
            else if((s[i]=='C'&&s[i+1]=='D')||(s[i]=='C'&&s[i+1]=='M'))
            {
                if(s[i+1]=='D')
                    n+=400;
                else
                    n+=900;
                i++;
            }
            else if(s[i]=='I')
            {
                n+=1;
            }
            else if(s[i]=='X')
            {
                n+=10;
            }
            else if(s[i]=='C')
            {
                n+=100;
            }
            else if(s[i]=='V')
            {
                n+=5;
            }
            else if(s[i]=='L')
            {
                n+=50;
            }
            else if(s[i]=='D')
            {
                n+=500;
            }
            else{
                n+=1000;
            }
        }
        return n;
    }
};
