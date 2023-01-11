//*Program Menghitung nilai rata-rata siswa*//
# include <conio.h>
# include <iostream.h>
# include <stdio.h>

main()
{
char nim[20];
char *grade;
char nama[20];
char input;
int Nilai1;
int Nilai2;
int Nilai3;
int Nilai_akhir;
home:
clrscr();
cout<<"=============================================="<<endl;
cout<<"      Menghitung Nilai Rata-Rata Siswa"<<endl;
cout<<"=============================================="<<endl;
cout<<" Masukkan Nim    : ";
gets(nim);
cout<<" Masukkan Nama   : ";
gets(nama);
cout<<" Nilai Keaktipan : ";cin>>Nilai1;
cout<<" Nilai Tugas     : ";cin>>Nilai2;
cout<<" Nilai Ujian     : ";cin>>Nilai3;
cout<<"=============================================="<<endl;
clrscr();
cout<<"\t           output"<<endl;
cout<<"=============================================="<<endl;
cout<<" Siswa yang Bernama "<<nama<<endl;
cout<<" Dengan nilai yang dihasilkan"<<endl;
Nilai1 = Nilai1 * 0.2;
cout<<"\n Nilai Keaktipan  * 20% : "<<Nilai1<<endl;
Nilai2 = Nilai2 * 0.3;
cout<<" Nilai Tugas      * 30% : "<<Nilai2<<endl;
Nilai3 = Nilai3 * 0.5;
cout<<" Nilai Ulangan    * 50% : "<<Nilai3<<endl;
Nilai_akhir = Nilai1 + Nilai2 + Nilai3;
if(Nilai_akhir>80){
grade = "A";
}else if(Nilai_akhir>70){
grade = "B";
}else if(Nilai_akhir>56){
grade = "c";
}else if(Nilai_akhir>46){
grade = "D";
}else{
grade = "E";
}
cout<<"\n Nim "<<nim<<" Siswa yang bernama "<<nama<<endl;
cout<<" Memperoleh nilai rata-rata "<<Nilai_akhir<<" dengan grade "<<grade<<endl;
cout<<"=============================================="<<endl;
cout<<" Ingin Input Lagi [Y/N] :";cin>>input;
if(input == 'Y' || input == 'y')
goto home;
else
goto end;
end:
getch();
}





