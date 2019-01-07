#include <iostream>
#include <math.h>

//char* brand(long card_no);
int validity(long card_no);

int main(void)
{
    long card_no = 0 ;

    cout << "Enter card no : " << endl;
    cin >> card_no;


    string br = brand (card_no);

    if(validity(card_no))
        cout << "Card no. validated. Thank you.\n" ;

    return 0;
}

int validity(long card_no)
{
    int rem=0 , dig=0 ,  dig_sum=0 ;
    long num = card_no;

    while(num > 0)
    {
        //extract every 2nd digit, *2
        rem = num % 100;
        dig = rem/10;
        dig = dig*2 ;

        //add digits of doubled digits
        while(dig > 0)
        {
            dig_sum = dig_sum + dig%10;
            dig = dig/10;
        }

        num = num/100;
    }

    cout << dig_sum << endl ;

    //add leftover digits
    dig_sum += card_no%10;
    card_no = card_no/10;

    while(card_no > 0)
    {
        rem = card_no % 100;
        dig = rem/10;

        dig_sum = dig_sum + dig;

        card_no = card_no/100;
    }

    cout << dig_sum << endl ;

    //check if end dig = 0
    if(dig_sum%10 == 0)
        return 1;

    else
    return 0;
}

/*char* brand(long card_no)
{
    int ctr = 0, rem=0 ;
    long num = card_no;
    ptr* br = NULL;

    while(num > 0)
    {
        num = num/10;
        ctr++;
    }

    num = card_no;
    rem = num / pow(10 , ctr-2);

    if(ctr==15 && (rem==37 || rem==34))
        *br = "AMEX";

    else if((ctr==13 || ctr==16) && (num / pow(10 , ctr-1)))
        *br = "VISA";

    else
        *br = "Master Card";

    return *br;

}*/
