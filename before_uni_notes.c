//#######################################IMPORTS

#include <stdio.h> //standard input / output import
#include <string.h> // hogy lehessen stringekkel is dolgozni
#include <math.h> //hogy lehessen matematikával dolgozni normálisan
#include <stdlib.h>
#include <time.h>

//#######################################IMPORTS
naja


//#######################################INSTALL

//code runner extension 
//c/c++ extension
//ezek után indítsuk újra a studio code-ot

/* otthonihoz kell egy fordító (gcc complier) -> https://sourceforge.net/projects/mingw-w64/ -> architecture x86 -> copy path -> control panel -> system and sec -> system -> advanced system settings -> advanced tab alatt environment variables -> pathnél new -> edit -> végére \mingw64\bin ->ok,ok,ok -> ez után fogja engedni a terminal build tab-nél a c fordítást (ez hozza létre a futáshoz szükséges JSON fájlt)
ennél se árt egy restart */

//#######################################INSTALL



//fájl fordítása .exe-re (futtatható legyen): 
//cmd -> cd ./working directory -> gcc filename.c -> filename.exe



//#######################################INT MAIN

int main(){ //azért int, mert 0 ha jól fut a program, ha error van, akkor 1

    //kiíratás | \n = sortörés | \t = tabulátor |
    printf("Ez a kiíratás\n") 
    printf("Ez még \t mindig az") 

//#######################################INT MAIN



//#######################################VARIABLES

//változók deklarálása
int x,y; 

//inicializás
x = 12; 
y = 3;

//deklarálás és inicializálás
int z = 123; 

//logikai változó, igaz vagy hamis értéket vehet fel |booleannál is %d van
bool e = true; 

//integer (egy egész szám)
int age = 21; 

//8 byte | /lf
double d = 3.1415978585956 

//lebegőpontos szám (floating point number) | 4 byte
float gdp = 2.123; 

 //egy karakter
char betu = 'c';

//egy karakter tömb (ARRAY = TÖMB)
char name[] = "BRO"; 
//nincs benne külön string
//charnak -127 és 127 között lehet '%c' értéket is adni, az az ASCII tábla alapján egy betű lesz 


// %d = decimal (számoknak) (ez egy spaceholder igazából és egy format specifier is) | ugyan így van a többinél is 
print("Te %d éves vagy", age); 

print("csao %s", name); 
printf("a betu amit keresel, az %c", betu);
printf("Az országos gpd: %f", gdp)

//konstans: olyan érték, ami nem változik a program futásakor
const float pi = 3.13159;
printf("%f",pi);


//ha jobb érték (az m) = aktuális érték, ha a bal oldalon, akkor a memória címre hivatkozik | &m = címkézpő operátor
printf("\nAdj meg egy masik szamot");
    scanf("%d", &m);
    printf("m = %d",m);

//#######################################VARIABLES



//#######################################FORMAT SPECIFIERS

float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;

//két tizedes jegyig irat .2
printf("Item 1 : %.2f\n", item1);
//minimum field width 8 
printf("Item 1 : %8.2f\n", item2); 
//balra igazítás - 
printf("Item 1 : %-8.2f\n", item3); 

//#######################################FORMAT SPECIFIERS



//#######################################ARITMETIKAI ÉS EGYÉB OPERÁTOROK

// + = osztás
// - = kivonás ...stb
// % = százalékos osztás 
// ++ = növelés
// -- = csökkentés

//megegyezésre példa

//x = x - 3;
//X -= 3;

//#######################################ARITMETIKAI ÉS EGYÉB OPERÁTOROK



//#######################################USER INPUT

    //file -> preference -> settings -> code runner -> terminal 

//#######################################USER INPUT

int kor;

printf("Hány éves vagy?");
scanf("%d", kor);

print("Te %d éves vagy",kor);

//25 bytes, ha fölé megyünk az túlcsordulásos lesz 
char name1[25]; 

print("Mi a neved?");
scanf("%s", name1 );

//fgets - el lehet olvasni a szóközt is, scanf csak az első szóközig olvasna, ami ebben az esteben nem jó a vezeték - keresztnév miatt
fgets(name1, 25, stdin) //változó , méret, stdin = standandard input

print("A te neved: %s", name1)

//#######################################USER INPUT



//#######################################MATEMATIKAI FUNKCIÓK

double A = sqrt(9); //gyök
double B = pow(2,4); //2 a negyediken 
int C = round(3.14); //kerekítés
int D = ceil(3.14) //felfelé kerekítés
int E = floor(3.99) //lefelé kerekítés
double F = fabs(-100); // abszolút érték 
double G = log(3); //logaritmus
double H = sin(45); //szinusz
double I = cos(45); //koszinusz
double J = tan(45); //tangens

//#######################################MATEMATIKAI FUNKCIÓK



//#######################################IF STATEMENT

// == comparison operator | ha ugyan olyannak kell lennie 
// >= nagyobb mint, | <= kisebb mint | != = hamis
int gomboc;

print("hany gomboc fagyit kersz?");
scanf("%d", gomboc);

if(gomboc >= 6){ //ha
    printf("Nem kéne ennyi fagyit enned!");
}
else if(gomboc <= 0){ //ha az előző nem, akkor 
    printf("Adj nekem is légyszi");
}
else if(gomboc == 0){
    printf("vegyél már egy fagyit");
}
else(){ //ha semmi nem, akkor 
    printf("Hibás értéket adtál meg!")
}

//Ezeket egymásba is lehet ágyazni, egy if-en belül lehet for ciklus vagy akár egy másik if is pl 

/*az egymásba ágyazott for ciklusokat (loopokat) NESTED LOOPNAK nevezzük 

pl:https://www.youtube.com/watch?v=87SH2Cn0s9A | 2 óra 05
*/

//#######################################IF STATEMENT



//#######################################SWITCH - CASE STATEMENT
//kb egy alternatíva arra, ha sok else if lenne 


int jegysok;
printf("Hanyas lett a dolgozatod?")
scanf("%d", jegysok)

switch (jegysok)
{
case 5:
    printf("Gratulálok, ötös!")
    break;
case 4:
    printf("Gratulálok, négyes!")
    break;
case 3:
    printf("Gratulálok, hármas!")
    break;
case 2:
    printf("Gratulálok, kettes!")
    break;
case 1:
    printf("megbuktál")
    break;

default:
printf("kérlek 1-5-ig adj meg egy egész számot")
    break;
}

//#######################################SWITCH - CASE STATEMENT



//#######################################LOGIKAI OPERÁTOROK

// && (AND) - akkor igaz, ha mindkét állítás igaz 
// || (OR) - akkor igaz, ha az egyik állítás igaz
// ! (NOT) - megcseréli a jelentését pl: !sunny - ha sunny boolean true, akkor ez így nem lesz jó, mert nem napos onnantól

//#######################################LOGIKAI OPERÁTOROK



//#######################################FUNCTIONS

//egy kód subsection, amit bármikor meg lehet hívni így nem kell mindig leírni, plusz ez az OOP alapja is 

/* a funkciók alapvetően nem látnak bele más funkciókba, így alapból a változóikat sem ismerik 

Megoldás: argumentekkel megadhatjuk őket a másik functionnek
pl: ha a birthday() function a mainen kívül lenne akkor a birthday (argument1, argument2, argument3, stb) paraméterek megadásával már tudná, hogy mire kell hivatkozni */


void birthday(char name[]){ //funkció deklarálása | paraméter megadása (char - amit megadtunk argumentben)

    printf("Boldog születésnapot!");
    print("Legyen szép napod! %d", name);
}

//funkció meghívása, argumentek megadása
birthday(name); 
birthday();


//ha return érték van, akkor a hívó funkció typenak és a változó typejának ahova hívjuk meg kell egyezni (pl: mind2 double legyen)

//#######################################FUNCTIONS



//#######################################PROTOTYPE FUNCTIONS

        //main után van írva a function a bodyba, ha egy paramétert elrontunk, AKKOR IS LE FOG FUTNI valahogy de warningot is ad arról, hogy nem jó -> jó debughoz és könnyebb navigálni vele

//#######################################PROTOTYPE FUNCTIONS



//#######################################STRING FUNCTIONS

char string1[] = "Lévai";
char string2[] = "Kristóf";

//mindent kisbetűvé alakít
strlwr(string1); 

//mindent nagybetűvé alakít
strupr(string2); 

//copy string 2 to string 1
strcpy(string1, string2); 

//átmásol n db karaktert string2 -> string1
strncpy(string1, string2, 4); 

// kicseréli a string1-et ? -re 
strset(string1, '?'); 

// n számú karaktert cserél ki a string1 ben
strnset(string1, 'x', 1); 

//megfordítja a stringet
strrev(string2); 

//egy string hossza (elemeinek száma) !!!
strlen(string1); 

//össze hasonlít 2 stringet hogy teljesen egyeznek-e | booleannal jön vissza 
strcmp(string1, string2); 

// ugyan az, csak n karakterre
strncmp(string1, string2, 1); 

//összehasonlítás | kis-nagy betűt nem veszi figyelembe
strcmpi (string1, string2); 

//ugyan az, csak n karakterre
strcmpi (string1, string2, 1); 

//#######################################STRING FUNCTIONS



//#######################################FOR LOOPS

//Megismétel egy kód részletet egy adott sorozatig

for(int i = 1; i <= 10; i++) // i+=3 | i-- stb
{
    printf("teszt 10 szer kiírva\n");
    printf("%d\n", i); //0-10
}

//#######################################FOR LOOPS



//#######################################WHILE LOOPS

//addig fut, amíg valamilyen feltétele igaz marad
//végtelen ideig is futhat, de ha sose true akkor el se indul

char name10[25];

printf("\nMi a neved?");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0'; //levágja a végén a \n-t

while(strlen(name) == 0){

    printf("Nem írtad be a neved!!!!!!!!!!!")
//előlről
    printf("\nMi a neved?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; //levágja a végén a \n-t
}

print("Hello %s", name);

//#######################################WHILE LOOPS



//#######################################DO WHILE LOOPS

//mindig futtatja a kódot egyszer, és a végén nézi meg, hogy igaz-e. Ha igaz, akkor elölről kezdi

int value = 0;
int sum = 0;


do //először csinálni kell valamit, majd a 
{
printf("Írj be egy számot 0 felett!");
scanf("%d", number);

if(number > 0){
    sum += number;
}
}while(number > 0); // végén teszteli le az állítást

//#######################################DO WHILE LOOPS



//#######################################ARRAY - tömb

//sok adatot tud tárolni, de csak ugyan olyan típusúakat

double prices[] = {5.2, 10, 15, 67.5789};
char names[] = {"Kristof", "Levai", "Zalan"};

printf("$%lf", prices[3]) //az első element a 0 

//kiíratás for loopal

printf("%d", sizeof(prices)); 
for(int j = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
{
    printf("$%.2lf\n", prices[i]);
}

//később is megadhatjuk, de hagyhatunk benne üresen is
double pricess[4];

pricess[0] = 10.65;
pricess[1] = 90.65;


//2D tömb: egy olyan tömb, ahol minden elem is egy tömb
int numberss[2][3] = //2 sor, 3 oszlop 
                     {
                     {1,2,3},
                     {4,5,6}
                     };


//ezt is meg adhatjuk máshogy pl : 
int munber[2][3];

//első érték, második érték 
munber[0][0] = 1;
munber[0][1] = 2; 


//2D array kiíratás nested (beágyazott) for loopal: 
// (ki lehet írni simán a méret megadással is , de így dinamikus lesz)


//kiszámítja a sorok számát
int rows = sizeof(numberss)/sizeof(numberss[0]);
//kiszámítja az oszlopok számát
int columns = sizeof(numberss[0])/sizeof(numberss)[0][0];

for(k = 0; k < rows; k++){
    for(l=0; l < columns; l++){
        printf("%d", numberss[k][l]);
    }
    printf("\n")
}


//2d karakter tömb
char carss[][10] = {"Mustang", "Corvette", "Camaro"}; //10 a max karakterszám

//elem változtatása
strcopy(carss[0], "Tesla") 

for(int o = 0; o < sizeof(carss)/sizeof(carss[0]), o++){
    printf("%s", cars[o]);
}

//#######################################ARRAY - tömb



//#######################################ÉRTÉKEK CSERÉJE

//megcseréli a két értéket
char C = "X";
char U = "Y";
char temp;


temp = x;
C = U;
U = temp;


//string: 

char x[15] = "water";
char y[15] = "soda";
char temp[15];

strcpy(temp, x);
strcpy(x, y);
strcpy(y, temp);

//#######################################ÉRTÉKEK CSERÉJE



//#######################################ARRAY - TÖMB RENDEZÉS

    //Tömb rendezése 
    int szamok[] = {5,8,9,1,2,3,4,0};
    int size = sizeof(szamok)/sizeof(szamok[0]);

        sort(szamok, size)
        printArray(szamok, size)

//#######################################ARRAY - TÖMB RENDEZÉS



//#######################################STRUCTURES

//össze tartozó változók gyűjteménye, egy neven tárolja őket egy memória címek 
//több típusú adat is kerülhet bele 

struct Player player1;
struct Player player2;

strcpy(player2.name, "Bro")
player2.score = 4;

printf("%s", player2.name);
printf("%d", player2.score);

//#######################################STRUCTURES



//#######################################ARRAY OF STRUCTURES

//struct definiálása
//ezt átalában felül a main előtt definiáljuk
struct Student
{
    char namee[12];
    float gpa;
};

//érték megadása
struct Student student1 = {"Spongebob", 3.0};
struct Student student2 = {"Patrick", 4.0};
struct Student student3 = {"Sandy", 5.0};

//kiíratás manuálisan
struct Student students[] = {student1, student2, student3};

//kiíratás for loopal
for(int b = 0; b < sizeof(students)/sizeof(students[0], b++))
{
    printf("%s\n", students[i].namee);
}

//#######################################ARRAY OF STRUCTURES



//#######################################RANDOM NUMBERS

//current time as a seed to generate random numbers
srand(time(0)); 

int number1 = rand() % 7; //így max 6 lehet (0-6)
//vagy
int number2 = (rand() % 6) +1;

//#######################################RANDOM NUMBERS



//#######################################PÁR HASZNOS DOLOG

//enum
//kb olyan, mint egy alias - segít, hogy jobban olvasható legyen a program 


//bitwise operators
// & = AND
// | = OR
// ^ = XOR
// << left shift
// >> right shift

//#######################################MEMORY ADDRESSES

//memory = an array of bytes within the RAM
//memory block = single unit (byte) within memory, used to hold values
//memory address = the address of where a memory block is located

char a = 'x';
print("%d bytes", a);

//memoria cim
printf("%p", &a);

//#######################################MEMORY ADDRESSES



//#######################################POINTERS

//egy olyan változó szerűség, ami egy memória címet egy változóban tárol
// * = indirect operator

int age = 21;
int *pAGE = NULL; //pointer deklarálása | mindig int lesz
pAGE = &age;

printf("address of age: %p", &age);
printf("address of age: %p", pAGE);

printf("The value of age: %d", age);
printf("The value of age: %d", *pAGE);

//#######################################POINTERS



//#######################################FÁJLBA ÍRÁS

// ha \-el adjuk meg, ott \\ kell mert amúgy üti egymást
FILE *pF = fopen("test.txt", "w");

//fájlba írás
fprintf(pF, "Ide lehet írni ami kell a fájlba");

//fájl bezárása ha kész
fclose(pF);

//létezik-e a fájl? - ha igen törölje ki, ha nem akkor adjon vissza egy printf-et
if(remove(test.txt) == 0)
{
    printf("ez a fájl sikeresen ki lett törökve")
}
else
{
    printf("A fájl nem létezett")
}

//#######################################FÁJLBA ÍRÁS



//#######################################FÁJLBÓL OLVASÁS

// ha \-el adjuk meg, ott \\ kell mert amúgy üti egymást
 FILE *pFF = fopen("poem.csv", r)

//egy sort tartalmaz egyszerre
char buffer[255]; 

//egy sort olvas
fgets(buffer, 255, pFF);
printf("%s", buffer);

//minden sort beolvas
while(fgets(buffer, 255, pFF) != NULL)
{
printf("%s", buffer);
}

fclose(pFF);

//#######################################FÁJLBÓL OLVASÁS

    return 0; //ez checkeli az errorst ha 1-es
}

//#######################################ARRAY RENDEZÉS FUNCTION()-S
void sort(int szamok[], int size)
{
    for(int h = 0; i < size, h++)
    {
        for(int y = 0; y < size; y++)
        {
            //buborék rendezés
            //ha fordított sorrendbe kell kiíratni, akkor < lesz nem >
            if(szamok[y] > szamok[y+1]) //ha a bal oldali szám nagyobb mint a jobb oldali
            {
                //két érték cseréje itt történik 
                int temp = szamok[y];
                szamok[y] = szamok[y+1];
                szamok[y+1] = temp;
            }
        }
    }

void printArray(int array[], int size){

    for(int i = 0; i < size; i++)
    {
        printf("%d", szamok[i]);
    }
}

}




