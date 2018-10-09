#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ConvertTo24 (string c){
        int h=0,m=0;
        if (c[1]==':'){
           if (c[5]== 'P')
    {
        h+=12;
    }
        switch (c[0])
    {    case '1' :
        h+=1;
        break;
    case '2' :
        h+=2;

        break;
    case '3' :
        h+=3;
        break;
    case '4' :
        h+=4;
        break;
    case '5' :
        h+=5;
        break;
    case '6' :
        h+=6;
        break;
    case '7' :
        h+=7;
        break;
    case '8' :
        h+=8;
        break;
    case '9' :
        h+=9;
        break;

        }
            switch (c[2])
    {
    case '1' :
        m+=10;
        break;
    case '2' :
        m+=20;

        break;
    case '3' :
        m+=30;
        break;
    case '4' :
        m+=40;
        break;
    case '5' :
        m+=50;
        break;
    case '6' :
        m+=66;
        break;

    }

    switch (c[3])
    {
    case '1' :
        m+=1;
        break;
    case '2' :
        m+=2;

        break;
    case '3' :
        m+=3;
        break;
    case '4' :
        m+=4;
        break;
    case '5' :
        m+=5;
        break;
    case '6' :
        m+=6;
        break;
    case '7' :
        m+=7;
        break;
    case '8' :
        m+=8;
        break;
    case '9' :
        m+=9;
        break;


    }
    if (h<10){
        cout <<"0"<<h<<m<<" hours"<<endl;

    }
    else {
    cout <<h<<m<<" hours"<<endl;
    }

        }
        else {
        if (c[5]== 'P')
    {
        h+=12;
    }
        switch (c[0])
    {
    case '0':
        break;

    case '1':

        h+=10;
        break;
    }
    switch (c[1])
    {
    case '1' :
        h+=1;
        break;
    case '2' :
        h+=2;

        break;
    case '3' :
        h+=3;
        break;
    case '4' :
        h+=4;
        break;
    case '5' :
        h+=5;
        break;
    case '6' :
        h+=6;
        break;
    case '7' :
        h+=7;
        break;
    case '8' :
        h+=8;
        break;
    case '9' :
        h+=9;
        break;


    }
    switch (c[3])
    {
    case '1' :
        m+=10;
        break;
    case '2' :
        m+=20;

        break;
    case '3' :
        m+=30;
        break;
    case '4' :
        m+=40;
        break;
    case '5' :
        m+=50;
        break;
    case '6' :
        m+=66;
        break;

    }

    switch (c[4])
    {
    case '1' :
        m+=1;
        break;
    case '2' :
        m+=2;

        break;
    case '3' :
        m+=3;
        break;
    case '4' :
        m+=4;
        break;
    case '5' :
        m+=5;
        break;
    case '6' :
        m+=6;
        break;
    case '7' :
        m+=7;
        break;
    case '8' :
        m+=8;
        break;
    case '9' :
        m+=9;
        break;


    }
    if (c[0]=='1'&&c[1]=='2'&&c[6]=='P')
    {
        cout <<"12"<<m<<" hours"<<endl;
    }
    else if (c[0]=='1'&&c[1]=='2'&c[6]=='A')
    {
        cout <<"00"<<m<<" hours"<<endl;

    }
    else
    {
        cout <<h<<m<<" hours"<<endl;

    }


        }

}





int main()
{
    string c;
    cout<<"Enter hour : ";
    getline (cin,c);
    cout << endl;
    ConvertTo24(c);


    return 0;
}
