#include "CounterStrike.h"
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


enum Colors { YELLOW = 14, BLUE = 11, WHITE = 119, RED = 4 };

CounterStrike::CounterStrike() : weapon(new Knife)
{
}

CounterStrike::CounterStrike(Weapon* w) : weapon(w)
{
}

CounterStrike::~CounterStrike()
{
    delete this->weapon;
}

void CounterStrike::SelectAction()
{
    while (true)
    {
        int code = _getch();
        
        if (code == char(13))        
              Action1();
        if (code == char(32))
              Action2();
    }
}

void CounterStrike::SelectWeapon()
{
    Coord();

    /*if (_kbhit()) 
    {
        int code = _getch(); 
    }*/

    while (true)
    {
        int code = _getch();
        
            if (code == char(49))                                   
            {
                system("cls");
                
                Knife k;
                cout << "\t\t\t\t" << k.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }
            else   if (code == char(50))              
            {
                system("cls");               
                Handgun H;  
                cout << "\t\t\t\t" << H.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }
            else   if (code == char(51))                                   
            {
                system("cls");                
                Shotdgun s;
                cout << "\t\t\t\t" << s.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }
            else   if (code == char(52))                                   
            {
                system("cls");               
                MachineGun mg;
                cout << "\t\t\t\t" << mg.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }
            else   if (code == char(53))                                   
            {
                system("cls");               
                Machine m;
                cout << "\t\t\t\t" << m.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }
            else   if (code == char(54))                                   
            {
                system("cls");              
                SniperRifle sr;
                cout << "\t\t\t\t" << sr.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }
            else   if (code == char(55))                                   
            {
                system("cls");               
                Carbine c;
                cout << "\t\t\t\t" << c.getName();
                cout << "\n\n\t\t\t\tSelect action: \n";
                cout << "\t\t\tEnter - aiming, Space - throw\n\n";
                SelectAction();
            }    
    }        
}

void CounterStrike::Action1()
{   
    weapon->Action1();
    COORD position;

    position.X = 35;
    position.Y = 10;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::RED);
    
    cout << char(206);    
}

void CounterStrike::Action2()
{   
    system("cls");
    COORD position;

    position.X = 35;
    position.Y = 10;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::RED);
    weapon->Action2();
}

void CounterStrike::Name()
{
    HWND hwnd = GetConsoleWindow(); 
    HDC hdc = GetDC(hwnd); 

    LOGFONT font;
    font.lfHeight = 50;
    font.lfEscapement = 0;
    font.lfWeight = 8;
    font.lfItalic = true;
    font.lfUnderline = true;
    font.lfStrikeOut = false;
    lstrcpy(font.lfFaceName, L"Calibri");

    SetTextColor(hdc, RGB(0, 215, 215)); 
    SetBkColor(hdc, RGB(0, 0, 0)); 
    SelectObject(hdc, CreateFontIndirect(&font)); 
    TextOutA(hdc, 350, 15, "Counter Strike", 14);
    ReleaseDC(hwnd, hdc);
}

void CounterStrike::Coord() // координаты
{
    Name();
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = false; // спрятать курсор
    cursor.dwSize = 1; 
    SetConsoleCursorInfo(h, &cursor);

    COORD position;

    position.X = 35;
    position.Y = 10;
    SetConsoleCursorPosition(h, position);   
    SetConsoleTextAttribute(h, Colors::BLUE);
    cout << " Select weapon";

    position.X = 35;
    position.Y = 12;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "1.Knife";

    position.X = 35;
    position.Y = 13;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "2.Handgun";

    position.X = 35;
    position.Y = 14;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "3.Shotdgun";

    position.X = 35;
    position.Y = 15;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "4.MachineGun";

    position.X = 35;
    position.Y = 16;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "5.Machine";

    position.X = 35;
    position.Y = 17;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "6.SniperRifle";

    position.X = 35;
    position.Y = 18;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Colors::YELLOW);
    cout << "7.Carbine";      
   /* {
        MessageBoxA(0, "Select weapon", "Take aim", 0);
    }*/
}

//void CounterStrike::Draw()
//{
//    Coord();
//
//}


