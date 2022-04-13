#include <stdio.h>

int main()
{
  
   int n=100;
   for(int i=0;i<n;i++)    //for((i=0;i<100;i++)) 
   {                       //do
       printf("%d\n",i);   //echo $i
   }                       //done
   
char C;
scanf("%c",&C);                     //read C
if(C == 'Y' || C == 'y' )           //if [ $C == 'Y' ] || [ $C == 'y' ]
{                                   //then
    printf("Yes\n");                  //echo "YES"
}
else if( C == 'n' || C == 'N')      //elif [ $C == 'N' ] || [ $C == 'n' ]
{                                   //then
    printf("No\n");                   //echo "NO"
}                                   //fi
// if [ conditie ] //if(cond)
// then            //{
//     ce sa faca  //bloc inst
// fi              //}

// if [ cond1 ] || [ cond2 ] //if(cond1 || cond2)
// if [ cond1 ] && [ cond2 ] //if( cond1 && cond2)

// if [ cond1 ]    //if(cond1)
// then            //{
//     bl_inst;
// elif [ cond2 ]  //} else if(cond2)
// then            //{
//     bl_inst
// fi              //   }

// -eq -> equal ==
// -lt -> less than <
// -gt -> greater than >
// -ne -> not equal !=
// -le -> less or equal <=
// -ge -> greater or equal >=
int X,Y;
scanf("%d",&X);                  //read X
scanf("%d",&Y);                  //read Y
if( X > Y)                       //if [ $X -gt $Y ]
{                                //then
 printf("X is greater than Y\n");//echo "X is greater than Y"
}
else if( X < Y )                 //elif [ $X -lt $Y ]
{                                //then
 printf("X is less than Y\n");   //echo "X is less than Y"
}
else if( X == Y)                 //elif [ $X -eq $Y ]
{                                //then
  printf("X is equal to Y\n");   //echo "X is equal to Y"
}                                //fi
//C++       C      Linux
//int     %d,%i    -i
//float     %f     -f
//char      %c     -c      
int x,y;                                                  // declare -i x; declare -i y
scanf("%d",&x);                                           // read X
scanf("%d",&y);                                           // read Y
int sum = x+y;                                            // sum=$(($X + $Y))
int dif = x-y;                                            // dif=$(($X-$Y))
int prod = x*y;                                           // prod=$(($X * $Y))
int div = x/y;                                            // div=$(($X / $Y))
printf("%d %d %d %d \n",sum,dif,prod,div);                // echo $sum; echo $dif; echo $prod; echo $div
return 0;
// cut -c 3 file.txt    -> selecteaza al 3-lea caracter de pe fiecare linie din fisierul file.txt
// cut -c 2,7  Input.txt -> selecteaza al 2-lea si al 7-lea caracter de pe fiecare linie din fisierul file.txt
//
// grep -w  "the" InputWords.txt -> afiseaza liinile din fisierul InputWords.txt care contin cuvantul "the"
// grep -w -i "the" InputWords.txt  -> afiseaza liniile din fisierul InputWords.txt care contin cuvantul "the
// fara a tine cont de uppercase sau lowercase, eg: selecteaza si The,ThE,THE ( nu este case sensitive)
//
// head -n 20 InputWords.txt -> afiseaza primele 20 de linii din fisierul InputWords.txt
// head -c 20 InputWords.txt -> afiseaza primele 20 de caractere din fisierul InputWords.txt
//
// cat InputWords.txt | tr "()" "[]" 
// -> afisez continutul fisierului InputWords.txt
// -> outputul comenzii cat devine input pentru tr
// -> comanda tr traduce parantezele "()" in "[]" astfel: ( devine [ ; ) devine ]
//
// cat InputWords.txt | tr -d a-z
// -> afisez continutul fisierului InputWords.txt
// -> outputul comenzii cat devine input pentru tr
// -> tr are optiunea -d ( delete ) si sterge toate literele de la a la z
// pentru a specifica un range scriem val1-val2 care se traduce {val1...val2}
//
// sort -d InputWords.txt -> aranjeaza in ordine alfabetica liniile din fisier (sortare crescatoare)
// sort -d -r InputWords.txt -> aranjeaza in ordine alfabetica liniile din fisier si apoi le inverseaza (sortare descrescatoare)


}