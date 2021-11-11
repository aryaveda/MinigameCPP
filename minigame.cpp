/******************************************************************************

*******************************************************************************/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

class human{
protected:
    string Nama;
    int Hitpoints;
    int Armor;
    int Damage;
    int Agility;
public: 
    void setnama(string nama){
        Nama = nama;
    }
    string getnama(){
        return Nama;
    }
    void sethitpoints(int hitpoints){
        Hitpoints = hitpoints;
    }
    int gethitpoints(){
        return Hitpoints;
    }
    void setarmor(int armor){
        Armor = armor;
    }
    int getarmor(){
        return Armor;
    }
    void setdamage(int damage){
        Damage = damage;
    }
    int getdamage(){
        return Damage;
    }
    void setagility(int agility){
        Agility = agility;
    }
    int getagility(){
        return Agility;
    }
    human(string nama, int hitpoints, int armor, int damage, int agility){
        Nama = nama;
        Hitpoints = hitpoints;
        Armor = armor;
        Damage = damage; 
        Agility = agility;
    }
};
class warrior : public human{
public: 
    warrior(string nama, int hitpoints, int armor, int damage, int agility)
    :human(nama, hitpoints, armor, damage,agility ) {}
    void perkenalanwarrior(){
        cout << "Anda telah memilih warrior!" << endl;
        cout << "Warrior ini pada saat SMA merupakan petarung jalanan yang ahli membantai musuh dengan gir dan cluritnya. " << endl;
        cout << "saat ini menggunakan pedang dan tameng untuk melindungi kerajaannya. ";
    }
};
class assassin : public human{
public:
assassin(string nama, int hitpoints, int armor, int damage, int agility)
    :human(nama, hitpoints, armor, damage, agility) {}
    void perkenalanmage(){
        cout << "Anda telah memilih assassin!" << endl;
        cout << "Assassin mampu menyerang anda dengan gerakan yang sangat lincah dan mampu menghindari serangan dengan lihai.";
    }
};
class archer : public human{
public:
archer(string nama, int hitpoints, int armor, int damage, int agility)
    :human(nama, hitpoints, armor, damage, agility) {}
    void perkenalanarcher(){
        cout << "Anda telah memilih archer!" << endl;
        cout << "Pemanah jago ini pernah mengikuti UKM panah selama kuliah, saat ini bertarung demi mempertahankan negaranya.";
    }
};
class monster{
protected:
    string Nama;
    int Hitpoints;
    int Armor;
    int Damage;
    int Agility;
public: 
    void setnama(string nama){
        Nama = nama;
    }
    string getnama(){
        return Nama;
    }
    void sethitpoints(int hitpoints){
        Hitpoints = hitpoints;
    }
    int gethitpoints(){
        return Hitpoints;
    }
    void setarmor(int armor){
        Armor = armor;
    }
    int getarmor(){
        return Armor;
    }
    void setdamage(int damage){
        Damage = damage;
    }
    int getdamage(){
        return Damage;
    }
    void setagility(int agility){
        Agility = agility;
    }
    int getagility(){
        return Agility;
    }
    monster(string nama,int hitpoints, int armor, int damage, int agility){
        Nama = nama;
        Hitpoints = hitpoints;
        Armor = armor;
        Damage = damage;
        Agility = agility;
    }
};
class orc : public monster{
    public:
    orc(string nama, int hitpoints, int armor, int damage, int agility)
    :monster(nama, hitpoints, armor, damage , agility) {}
    void perkenalanorc(){
        cout << "Anda telah memilih orc!" << endl;
        cout << "Orc adalah makhluk buas dengan postur seperti manusia dan memiliki taring panjang." << endl;
    }
};
class minotaur : public monster{
    public:
    minotaur(string nama, int hitpoints, int armor, int damage, int agility)
    :monster(nama, hitpoints, armor, damage, agility) {}
    void perkenalanminotaur(){
        cout << "Anda telah memilih minotaur!" << endl;
        cout << "Minotaur merupakan monster berbentuk manusia yang berkepala banteng. Speknya kurang lebih sama kayak di Mobel Lejen." << endl;
    }
};
class ghoul : public monster{
    public:
    ghoul(string nama, int hitpoints, int armor, int damage, int agility)
    :monster(nama, hitpoints, armor, damage, agility) {}
    void perkenalanghoul(){
        cout << "Anda telah memilih ghoul!" << endl;
        cout << "Ghoul sendiri adalah makhluk kanibal yang menjadikan manusia sebagai makanan utamanya." << endl;
    }
};
int main(){
    mulai:
    char confirm;
    orc Orc = orc("Orc" , 650 , 150, 120, 60); //980
    minotaur Minotaur = minotaur("Minotaur" , 690 , 170, 85, 35);
    ghoul Ghoul = ghoul("Ghoul" ,580 , 145 , 155, 100);
    warrior Warrior = warrior("Warrior" , 650 , 135, 135, 60);
    assassin Assassin = assassin("Assassin" , 510 , 100, 200, 170);
    archer Archer = archer("Archer" ,550 , 150 , 170, 110);
    int choice , playerhp[2], playerdamage[2] , playerarmor[2], playeragility[2];
    int race[2], kelas[2], p2hurt , p1hurt, stokhp1 = 2, stokhp2 = 2;
    string nama[2] , playerclass[2];
    cout << "----------------------The Elder Scrolls 69: Sendowo----------------------" << endl;
    cout << "----------------------Created by Arya Veda----------------------" << endl;
    Sleep(200);
    cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
    for (int i = 0; i < 2; i++)
    {
    cout << "Player "<< i+1 << "\nMasukkan nama anda: ";
    cin >> nama[i];
    system("cls");
    milih:
    cout << "Pilih Ras Anda: " << endl;
    cout << "[1] Manusia\n[2] Monster" << endl;
    cin >> race[i];
    system("cls");
    if (race[i] == 1)
    {
        cout << "Pilih class: " << endl;
        cout << "[1] Warrior - seimbang antara damage dan defense\n[2] Assassin - Ahli dalam damage dan lincah, namun memiliki nyawa tipis\n[3] Archer - mampu menyerang dari jauh dengan damage tinggi, namun memiliki pertahanan yang lemah\n";
        cin >> kelas[i];
        if (kelas[i] == 1)
        {
            system("cls");
            playerclass[i] = Warrior.getnama();
            playerhp[i] = Warrior.gethitpoints();
            playerdamage[i] = Warrior.getdamage();
            playerarmor[i] = Warrior.getarmor();
            playeragility[i] = Warrior.getagility();
            Warrior.perkenalanwarrior();
            cout << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        } else if(kelas[i] == 2) {
            system("cls");
            playerclass[i] = Assassin.getnama();
            playerhp[i] = Assassin.gethitpoints();
            playerdamage[i] = Assassin.getdamage();
            playerarmor[i] = Assassin.getarmor();
            playeragility[i] = Assassin.getagility();
            Assassin.perkenalanmage();
            cout << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        } else if(kelas[i] == 3) {
            system("cls");
            playerclass[i] = Archer.getnama();
            playerhp[i] = Archer.gethitpoints();
            playerdamage[i] = Archer.getdamage();
            playerarmor[i] = Archer.getarmor();
            playeragility[i] = Archer.getagility();
            Archer.perkenalanarcher();
            cout << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        }  else {
            cout << "Pilih angka yang benar (1-3)" << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
            goto milih;
        }
    } else if (race[i] == 2) {
        cout << "Pilih class: " << endl;
        cout << "1. Orc\n2. Minotaur\n3. Ghoul\n";
        cin >> kelas[i];
        if (kelas[i] == 1)
        {
            system("cls");
            playerclass[i] = Orc.getnama();
            playerhp[i] = Orc.gethitpoints();
            playerdamage[i] = Orc.getdamage();
            playerarmor[i] = Orc.getarmor();
            playeragility[i] = Orc.getagility();
            Orc.perkenalanorc();
            cout << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        } else if(kelas[i] == 2) {
            system("cls");
            playerclass[i] = Minotaur.getnama();
            playerhp[i] = Minotaur.gethitpoints();
            playerdamage[i] = Minotaur.getdamage();
            playerarmor[i] = Minotaur.getarmor();
            playeragility[i] = Minotaur.getagility();
            Minotaur.perkenalanminotaur();
            cout << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        } else if(kelas[i] == 3) {
            system("cls");
            playerclass[i] = Ghoul.getnama();
            playerhp[i] = Ghoul.gethitpoints();
            playerdamage[i] = Ghoul.getdamage();
            playerarmor[i] = Ghoul.getarmor();
            playeragility[i] = Ghoul.getagility();
            Ghoul.perkenalanghoul();
            cout << endl;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        } else {
            cout << "Pilih angka yang benar (1-3)";
            goto milih;
            cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
        }
    } else {
        cout << "Masukkan angka yang benar (1-2)";
        cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
    goto milih;
    }
    }
    cout << "PERTARUNGAN DIMULAI!" << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
    int init = rand()%2+1;
    lanjoot2:
    if (init == 1) {
    while (playerhp[0] > 0 || playerhp[1] > 0) {
    cout << "Giliran " << nama[0] << "\n==========\n";
    ganti3:
    cout<<"Apa yang akan "<< nama[0] <<" lakukan?\n1 - Heavy attack\n2 - Light Attack \n3 - Serangan Bertahan\n4 - Gunakan potion healing(sisa " << stokhp1 << ")\n";
    do{cin>>choice;}while(choice>4 || choice<1);
    switch (choice) {
    case 1:
    playerdamage[0] += rand()%20+10;
	playerarmor[0] += rand()%10+10;
	playeragility[0] += rand()%5;
	break;
    case 2:
    playerdamage[0] += rand()%5+10;
	playerarmor[0] += rand()%10+10;
	playeragility[0] += rand()%15;
    break;
    case 3:
    playerdamage[0] += rand()%10+10;
	playerarmor[0] += rand()%20+10;
	playeragility[0] += rand()%5;
	break;
    case 4:
    if (stokhp1 > 0) {
    playerhp[0] += 200;
    cout << "Nyawa "<< nama[0] <<" bertambah 200 menjadi " << playerhp[0] <<endl;
    stokhp1 -= 1;
    goto ganti3;
    }  else {
        cout << "Potion anda sudah habis!" << endl;
        goto ganti3;
    }
    break;
    }
    p2hurt = (playerdamage[0] - playeragility[1]) - (playerarmor[1]/playerdamage[0]);
    if (p2hurt < 0) {
        p2hurt = playerdamage[0];
    }
    playerhp[1] = playerhp[1] - p2hurt;
    cout<<nama[0]<<" memberikan "<<p2hurt<<" damage ke " <<  nama[1] << endl;
    cin.get();
    _getch();
    system("cls");
    if (playerhp[1] < 1) {
    cout<<nama[0]<< " berhasil mengalahkkan "<< nama[1] << " dengan " <<playerhp[0] << " HP tersisa."<< endl;
    cin.get();
    _getch();
    system("cls");
    return 0;
    }
    cout<<nama[1]<<" sekarang punya "<<playerhp[1]<<" hp tersisa.\n";
    p1hurt = (playerdamage[1] - playeragility[0]) - (playerarmor[0]/playerdamage[1]);
    if (p1hurt < 0) {
    p1hurt = playerdamage[1];
    }
    playerhp[0] = playerhp[0] - p1hurt;
    cout<<nama[1]<<" menyerang "<< nama[0] <<" dengan "<<p1hurt<<" damage.\n";
    if (playerhp[0] < 1) {
    cout<<nama[0]<<" mati. " << nama[1]<<  " masih punya "<<playerhp[1]<<" hp tersisa.\n";
    cin.get();
    _getch();
    system("cls");
    goto tamat;
    }
    cout<< nama[0] <<" sekarang memiliki "<<playerhp[0]<<" hp tersisa.\n\n";
    }
    }else {
    lanjoot1:
    while (playerhp[0] > 0 || playerhp[1] > 0) {
    cout << "Giliran " << nama[1] << "\n==========\n";  
    ganti2:
    cout<<"Apa yang akan "<< nama[1] <<" lakukan?\n1 - Heavy attack\n2 - Light Attack \n3 - Serangan Bertahan\n4 - Gunakan potion healing (sisa " << stokhp2 << ")\n";
    do{cin>>choice;}while(choice>4 || choice<1);
    switch (choice) {
    case 1:
    playerdamage[1] += rand()%20+10;
	playerarmor[1] += rand()%10+10;
	playeragility[1] += rand()%5;
	break;
    case 2:
    playerdamage[1] += rand()%5+10;
	playerarmor[1] += rand()%10+10;
	playeragility[1] += rand()%15;
    break;
    case 3:
    playerdamage[1] += rand()%10+10;
	playerarmor[1] += rand()%20+10;
	playeragility[1] += rand()%5;
	break;
    case 4:
    if (stokhp2 > 0) {
    playerhp[1] += 200;
    cout << "Nyawa "<< nama[1] <<" bertambah 200 menjadi " << playerhp[1] <<endl;
    stokhp2 -= 1;
    goto lanjoot2;
    } else {
        cout << "Potion anda sudah habis!" << endl;
        goto ganti2;
    }
    break;
    }
    p1hurt = (playerdamage[1] - playeragility[0]) - (playerarmor[0]/playerdamage[1]);
    if (p1hurt < 0) {
    p1hurt = playerdamage[1];
    }
    playerhp[0] = playerhp[0] - p1hurt;
    cout<<nama[1]<< " menyerang "<< nama[0] <<" dengan "<<p1hurt<<" damage.\n";
    if (playerhp[0] < 1) {
    cout<<nama[0] << " mati. " << nama[1] << " menang dengan sisa "<<playerhp[1]<<" hp.\n";
    cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
    goto tamat;
    }
    cout<<nama[0] << " sekarang memiliki "<<playerhp[0]<<" hp tersisa.\n\n";
    cout << "Giliran " << nama[0] << "\n==========\n";
    ganti1:
    cout<<"Apa yang akan "<< nama[0] <<" lakukan?\n1 - Heavy attack\n2 - Light Attack \n3 - Serangan Bertahan\n4 - Gunakan potion healing (sisa " << stokhp1 << ")\n";
    do{cin>>choice;}while(choice>4 || choice<1);
    switch (choice) {
    case 1:
    playerdamage[0] += rand()%20+10;
	playerarmor[0] += rand()%10+10;
	playeragility[0] += rand()%5;
	break;
    case 2:
    playerdamage[0] += rand()%5+10;
	playerarmor[0] += rand()%10+10;
	playeragility[0] += rand()%15;
    break;
    case 3:
    playerdamage[0] += rand()%10+10;
	playerarmor[0] += rand()%20+10;
	playeragility[0] += rand()%5;
	break;
    case 4:
    if (stokhp1 > 0) {
    playerhp[0] += 200;
    cout << "Nyawa "<< nama[0] <<" bertambah 200 menjadi " << playerhp[0] <<endl;
    stokhp1 -= 1;
    goto ganti1;
    }  else {
        cout << "Potion anda sudah habis!" << endl;
        goto ganti1;
    }
    break;
    }
    p2hurt = (playerdamage[0] - playeragility[1]) - (playerarmor[1]/playerdamage[0]);
    if (p2hurt < 0) {
    p2hurt = playerdamage[0];
    }
    playerhp[1] = playerhp[1] - p2hurt;
    cout<<nama[0]<< " memberikan "<<p2hurt<<" damage ke " << nama[1] << "!\n";
    cin.get();
    _getch();
    system("cls");
    if (playerhp[1] < 1) {
    cout<<nama[0] << " menang! dengan "<<playerhp[0]<<" hp tersisa.\n";
    cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
    system("cls");
    goto tamat;
    }
    cout<<nama[1] <<" memiliki  "<<playerhp[1]<<" hp tersisa.\n";
} } 
tamat:
cout << "Apakah anda ingin main lagi? (Y/N)";
cin >> confirm;
if (confirm == 'Y' || confirm == 'y')
{
    system("cls");
    goto mulai;
} else {
    system("cls");
    cout << "----------------------THANKS FOR PLAYING----------------------" << endl;
    cout << "----------------------Subscribe Youtube: Arya Veda A----------------------" << endl;
    cout << "----------------------Follow IG: @aryaveda__----------------------" << endl;
    return 0;
}

return 0;

}