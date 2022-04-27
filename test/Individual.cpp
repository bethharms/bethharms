   #include "Individual.h"

    Individual::Individual(int l)
    {
        length = l;

        binString.insert(0, l, '0');
    }

    Individual::Individual(std::string str)
    {
        binString = str;

        length = binString.size();
    }

    std::string Individual::getString()
    {
        return binString;
    }

    int Individual::getBit(int pos)
    {
        if (pos >= 0 && pos < length)
        {
            if ( binString[pos] == '0')
            {
                return 0;
            }
            
            else
            {
                return 1;
            }
        }

        else
        {
            return -1;
        }
    }

    void Individual::flipBit(int pos)
    {
        if (binString[pos] == '0')
        {
            binString[pos] = '1';
        }
        else
        {
            binString[pos] = '0';
        }
    }

    int Individual::getMaxOnes()
    {
        int count = 0;

        for (int k = 0 ; k < (length - 1) ; k++)
        {
            int i = k;
            int temp = 0;

            while (binString[i] != '0')
            {
                if (i > (length - 1))
                {
                    break;
                }
                
                temp++;
                i++;
            }

            if (temp > count)      
            {
                count = temp;       
            }
        }

        return count;
    }

    int Individual::getLength()
    {
        return binString.size();
    }