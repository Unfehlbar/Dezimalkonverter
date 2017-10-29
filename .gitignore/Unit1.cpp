int Dez, Bin;
Dez = StrToInt(Edit_Dez->Text);

while (Dez!=0)
{
  Bin = fmod(Dez,2);
  Memo1->Lines->Insert(0,Bin);
  Dez = Dez / 2;
} 

ShowMessage("Fertig!");
